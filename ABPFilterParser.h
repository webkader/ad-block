#pragma once

#include "filter.h"

int sum(int a, int b);

extern const char *separatorCharacters;

void parseDomains(const char *input);
void parseOptions(const char *input);
int findFirstSeparatorChar(const char *input, int startingPos);
void parseHTMLFilter(const char *input, int index, Filter *);
void parseFilter(const char *input, Filter&);
void parse(const char *input);
int getDomainIndex(const char *input);
int indexOfFilter(const char *input);
void getUrlHost(const char *input, char *hostBuffer);
bool filterDataContainsOption(Filter *);
bool isThirdPartyHost(const char *input);
void matchesOptions(const char *input);
void matchesFilter(Filter *, const char *input);
void matches(const char *input);
void getFingerprint(const char *input);
