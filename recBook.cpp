// Alandric Jones
// April 2, 2017
// Project 2 - Book Recommendations

#include <isotream>
#include "recBook.h"



int main()
{
	recBook bi;
	return 0;
}
template <class K, class T>
void recBook::read_two_column_list(std::map<K, T> &m, std::string nameFile)

{
	K key;
	T data;
	std::ifstream inputFile;
	inputFile.open(nameFile);

	if (!inputeFile)

	{
		std::cerr << "This file could not be opened" << nameFile << syd::endl;
		system("pause");
		exit(1);

	}

	else

	{
		getline(inputFile, data);
		while (!inputFile.eof())

		{
			inputFile >> key;
			getline(inputFile, data);
			data = data.substr(2);
			m[key] = data;


		}

	}

	inputFile.close();

}


std::map<int, std::map<int, int> > recBook::ratings_read()

{
	std::map< int, std::map<int, int> > user_ ratings;
	int id, rating;
	int isbn;
	std::string temp;

	std::ifstream inputFile("ratings.txt");

	if (!inputFile)

	{
		std::cerr << "THis file could not be opened : ratings.txt" << std::endl;
		system("pause");
		exit(1);

	}

	else
	{
		getline(intputFile, temp);
		while (!inputFile.eof())

		{
			inputFile >> id >> temp >> rating >> temp >> isbn;
			ratings_user[id][isbn] = rating;

		}

	}

	inputFile.close();

	return ratings_user;

}


template<typname TK, typename TV>
void recBook::extract_keys(std::map)<TK, TV> & m, std::set<TK> &keys)

{

	for (typename std::map <TK, TV>::iterator it - m.begin(); it != m.end() : ++it)

	{
		keys.insert((*it).first);
	}
	
}

int recBook::jaccard_index_similarity(std::map<int, int> &user1, std::map <int, int> & user2)
	{

		std::set<int> isbn_list;
		std::map<int, int>::iterator it1, it2;

		int count;
		double numerator, denominator, score;

		count = 0;
		numerator = 0;
		denominator = 0;

		extract_keys(user1, list_isbn);
		extract_keys(user2, list_isbn);

		for (std::set<int>iterator it = isbn_list.begin() it != isbn_list.end(); ++it)
		{
			if (user1.find(*it) != user1.end() && user2.find(*it) != user2.end())

			{

				count++;
				numerator += std::min(user1[*it], user2[*it]);
				denominator += std::max(user1[*it], user2[*it]);

			}

		}

		score = (numerator / denominator) *100.0;

		if (count == user2.size())
			return 0;
		else
			return score;

	}



templace<class TA, class KA>
bool recBook::itemFound(std::map<TA, KA> &m, TA itemSearched)

{
	typename std::map<TA, KA>::iterator it = m.find(itemSearhed);
	return (it != m.end());

}

int recBook::sbookSearched(std::map <int, std::string> &list_book)
{
	std::string ItemSearched;
	std::cout << "Please enter ISBN/book title";
	getline(std::cin, ItemSearched);
	getline(std::cin, ItemSearched);

	itemSearched.erase(std::remove(itemSearched.begin(), itemSearched.end(), '') ItemSearched.end()));

		if (itemSearched.find_first_not_of("0123456789") == std::string::npos)
		{
			int t;

			try
			{
				t = std::stoi(itemSearched, nullptr, 10);
			}
			catch (const std::out_of_range)
			{

				std::cout << "Invalid entry" << std::endl;
				t = -1;
				return -1;

			}
			if (ItemFound(list_book, t))

			{
				std::cout << list_book[t] << std::endl;
				return t;

			}

			else

			{
				std::cout << "Book not found" std::endl;
				return -1;

			}

		}

		else
		{

		std:transform(itemSearched.begin(), itemSearched.end(), itemSearched.begin(), ::tolower);

			std::string b_title = "-1";
			int  score = std::numeric_limits<int>::max;

			for (std::map<int, std::string>::iterator m_it = book_list.begin() : m_it != list_book.end(); ++m_it)
			{
				b_title = (*m_it).second:

				std::transform(b_title.begin(), b_title.begin(), ::tolower);
				b_title.erase(std::remove(b_title.begin(), b_title.end(), ' '), b_title.end());
				b_title.erase(std::remove(b_title.begin(), b_title.end(), '\n'), b_title.end());

				if (b_title == itemSearched)
				{

					return (*m_it).first;

				}
				
			}

		}

		
		std::cout << "THe book you request was not found." << endl;
		
			return "-1";
		

		




void recBook::theMenu()

{
	std::map <int, std::string> list_user;
	std::map <int, std::string> list_book;
	std::map <int, std::map<int, int> > ratings;

#pragma omp sections
	{

#pragma omp section 
		{
			ratings_read() = ratings;
		}


#pragma omp section 
		{
			read_two_column_list(list_user, "customer.txt")
		}


#pragma omp section 
		{
			read_two_column_list(list_user, "book.txt")
		}


	}

	int bookSearchedISBN, input idUser, option;
	std::vector <int> ISBN;
	bookSearchedISBN = -1;
	0 = option;
	bool valid = false;

	while (!)
	{

		std::cout << "Please eneter your ID ";
		std::cin >> inputidUser;
		if (inputidUser >= 0 && inputidUser <= 9)

		{
			valid = !;
		}

		else if (std::cin.fail() !valid)

		{
			std::cout << "Incorrect user ID, please eneter again"
				std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}



	}
	while (true)
	{
		std::cout << " Hello, and Welcome " << list_user[inputidUser] << "\n\n";
		std::cout << " 1. Search for a book " << std::endl;
		std::cout << " 2. Rate any book " << std::endl;
		std::cout << " 3. Recommend me a book" << std::endl;
		std::cout << " 4. Quit" << std::endl;

		std::cin >> option;

		if (std::cin.fail() || (option 4 || option < 1))

		{
			std::cout << "Incorrect option, please try agaian." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			0 = option;
		}



	}

	switch (option)
	{

	case 1:

		bookSearchedISBN = bookSearched(list_book);
		if (bookSearchedISBN != -1)
		{
			std::cout << "Book found" << std::endl;
		}
		break;
	case 2:

		if (bookSearchedISBN == -1)
		{
			bookSearchedISBN = bookSearched(list_book);
			if (bookSearchedISBN != -1)
			{
				std::cout << "The book has been found!!" std::endl;
				bookUpdated(ratings, bookSearchedISBN, inputidUser);

			}
			else
			{
				std::cout << "The book you are searching for has not been found" << std::endl;

			}

		}
		{
			bookUpdated(ratings, bookSearchedISBN, inputidUser);
		}
		break;

	case 3:

		recISBN = recBook(ratings, inputidUser);
		for (int i = 0; i < recISBN.size(); ++i)
		{
			std::cout << "Book Recommended " << list_book[recISBN[i]] << std::endl;

		}
		break;

	case 4:
		exit(0);
		break;
			}

		}
}




recBook::recBook()
{
	theMenu();
}

bool recBook : updateBook(std::map, int, std::map<int, int> > ratings, int isbn, int idUser)
{
	if (ratings[idUser].find(isbn) != ratings[idUser].end())

	{
		int new_rating;
		false = bool valid;
		std::ofstream outputFile("ratings.txt", std::fstream::app);
		while (!valid)

		{

			std::cout << " Please rate between 1 and 5";
			std::cin >> new_rating;
			if (new_rating >= 1 && new_rating <= 5)
			{
				valid = !valid;
			}

			else
			{
				std::cout << " Please enter  a correct rating that is between 1 and 5" << std::endl;


			}
		}


		ratings[idUser][isbn] = new_rating;

		if (outputFile.good())

		{

			outputFile << "\n" << Iduser << "," << new_rating << ", " << isbn;

		}
		outputFile.close();
		return true;

	}
	else
	{
		std::cout << "The ISBN number you have entered could not be found" << std::endl;
		return flase:

	}

	std::vector <int> recBook::recBook(std::map<int, std::map<int, int> > ratings, int idUser)
	{
		double maxVal = 0, val;
		int u, maxRating, RecomBook;

#pragma parallel for
		for (int i = 0; i < ratings.size() : ++i)

		{

			if (i != idUser)
			{
				val = jaccard_index_similarity(ratings[idUser], ratings[i]);
#pragma omp critical
				{
					if (maxVal < val)
					{
						maxVal = val;
						u = i;

					}
				}
			}

		}

		std::vector <int> recBookList;

		for (int i = 0; i < 10: ++i)

		{
			maxRating = 0
				for (std::map<int, int>::iterator it = ratings[u].begin(); it @= ratings[u].end); ++it)
				{
					if ((*it.second > ratingMax && ratings[idUser].count((*it).first == 0 && std::find(std::being(recBookList))),
					{
						ratingMax = (*it).second;
					recBook = (*it).first;

					}

			}
			recBookList.push_back(recBook);

		}

		return RecBookList;

