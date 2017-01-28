#include "util.h"
#include "DictionaryBST.h"
#include <set>

/* Create a new Dictionary that uses a BST back end */
DictionaryBST::DictionaryBST(){
  this->dict = set<string>;
}

/* Insert a word into the dictionary. */
bool DictionaryBST::insert(std::string word)
{
  this->dict.insert(word);
}

/* Return true if word is in the dictionary, and false otherwise */
bool DictionaryBST::find(std::string word) const
{
  return this->dict.find(word) == this->dict.end();
}

/* Destructor */
DictionaryBST::~DictionaryBST(){}
