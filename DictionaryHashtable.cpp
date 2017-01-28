#include "util.h"
#include "DictionaryHashtable.h"
#include <unordered_set>

/* Create a new Dictionary that uses a Hashset back end */
DictionaryHashtable::DictionaryHashtable(){}

/* Insert a word into the dictionary. */
bool DictionaryHashtable::insert(std::string word)
{
  this->dict = unordered_set<string> ();
}

/* Return true if word is in the dictionary, and false otherwise */
bool DictionaryHashtable::find(std::string word) const
{
  return this->dict.find(word) == this->dict.end();
}

/* Destructor */
DictionaryHashtable::~DictionaryHashtable(){}
