#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

/*
Input file format:
timestamp,tap

1.23456,left
*/

char splitChar = ',';

struct tempo {
    float timestamp;
    string tap;
};

vector<tempo*> loadTempoFile(string fileName) {
    ifstream file(fileName); // pass file name as argment
    vector<tempo*> result;

	for (string line; getline(file, line);){
		istringstream iss(line);
        vector<string> tokens;
        for (string each; getline(iss, each, splitChar);) {
            tokens.push_back(each);
        }

        float timestamp = atof(tokens[0].c_str());
        string tap = "";
        if (tokens.size() > 1) {
            tap = tokens[1];
        }
		
        tempo *t = new tempo();
        t->timestamp = timestamp;
        t->tap = tap;

        result.push_back(t);
	}

    return result;
}

void releaseTempo(vector<tempo*> tempos) {
    for(int i = 0; i < tempos.size(); i++) {
        delete tempos[i];
    }

    tempos.clear();
}

float findBestMatchInGeneratedTempo(float manualTempoTimestamp, vector<tempo*> generatedTempo) {
    float maxDiffer = INT_MAX;
    float bestMatch = manualTempoTimestamp;
    for(int i = 0; i < generatedTempo.size(); i++) {
        float differ = fabs(manualTempoTimestamp - generatedTempo[i]->timestamp);
        if (differ < maxDiffer) {
            maxDiffer = differ;
            bestMatch = generatedTempo[i]->timestamp;
        }
    }

    return bestMatch;
}

void matchTempo(string manualTempoFile, string generatedTempoFile) {
    vector<tempo*> manualTempo = loadTempoFile(manualTempoFile);
    vector<tempo*> generatedTempo = loadTempoFile(generatedTempoFile);

    for(int i = 0; i < manualTempo.size(); i++) {
        manualTempo[i]->timestamp = findBestMatchInGeneratedTempo(manualTempo[i]->timestamp, generatedTempo);

        printf("%f,%s\n", manualTempo[i]->timestamp, manualTempo[i]->tap.c_str());
    }

    releaseTempo(manualTempo);
    releaseTempo(generatedTempo);
}

int main(int argc, char* argv[])
{
    matchTempo(argv[1], argv[2]);
	return 0;
}