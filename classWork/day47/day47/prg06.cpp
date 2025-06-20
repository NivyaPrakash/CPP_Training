#include<iostream>
using namespace std;


class Article
{
	string content;
public:
	Article(const string& text) : content(text)
	{
		cout << "[Article Created]: " << content << endl;
	}
	void read() const
	{
		cout << "reading article:" << content << endl;
	}
	~Article() 
	{
		cout << "[Article deleted]:" << content << endl;
	}
};


class Subscriber
{
	shared_ptr<Article> article;
public:
	Subscriber(shared_ptr<Article> a) : article(a)
	{
		cout << "[Subscriber Created]" << endl;
	}
	void readArticle() const
	{
		if (article)
			article->read();
		else
			cout << "No article to read." << endl;
	}
	~Subscriber() {
		cout << "[Subscriber Deleted]" << endl;
	}
};

int main() {
	shared_ptr<Article> article = make_shared<Article>("Breaking News: C++ Rocks!");

	{
		Subscriber s1(article);
		Subscriber s2(article);
		Subscriber s3(article);

		s1.readArticle();
		s2.readArticle();
		s3.readArticle();

		cout << "Use count (shared_ptr): " << article.use_count() << endl;
	}

	// All subscribers out of scope; article should be deleted
	cout << "After all subscribers are gone..." << endl;
	cout << "Use count (shared_ptr): " << article.use_count() << endl;

	return 0;
}
