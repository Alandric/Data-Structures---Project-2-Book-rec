// Alandric Jones
// April 2, 2017
// Project 2 - Book Recommendations


#include <iostream>
#include <fstream>
#include <omp.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <limits.h>


class recBook

{

private:
	
	template <class K, class T>
	template <typename TK, typename TV>
	template <class TA, class KA>
	void theMenu();
	void extract_keys(std::map<K, T> &m, std::string nameFile);
	void read_two_column_list(std::map<K, T> &m, std::string nameFile);
	int bookSearched(std::map <int, std::string> &list_book);
	int theDistance(std::string s, std::string t);
	int jaccard_index_similarity(std::map <int, int> &user1, std::map <int, int> &user2);
	bool bookUpdated(std::map <int, std::map<int, int> > ratings, int idUser, int ISBN);
	bool itemFound(std::map<TA, KA> &m, TA itemSearched);
	std::vector<int> recBook(std::map <int, std::map<int, int> > ratings, int idUser)
	std::map<int, std::map<int, int> > ratings_read();


public:

	recBook();




};


