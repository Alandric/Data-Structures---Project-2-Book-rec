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
	
	
	
	template <class AJ, class JA>
	void theMenu();
	template <class A, class J>
	void extract_keys(std::map<A, Jones> &m, std::string nameFile);
	template <typename AJ, typename JA>
	void read_two_column_list(std::map<A, Jones> &m, std::string nameFile);
	int bookSearched(std::map <int, std::string> &list_book);
	int jaccard_index_similarity(std::map <int, int> &user1, std::map <int, int> &user2);
	bool bookUpdated(std::map <int, std::map<int, int> > ratings, int idUser, int ISBN);
	bool itemFound(std::map<TA, KA> &m, TA itemSearched);
	std::vector<int> recBook(std::map <int, std::map<int, int> > ratings, int idUser)
	std::map<int, std::map<int, int> > ratings_read();


public:

	recBook();




};


