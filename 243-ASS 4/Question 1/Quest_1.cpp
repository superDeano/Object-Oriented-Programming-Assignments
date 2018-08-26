#include <iostream>
#include <string>
#include <array>
#include <iomanip>
using namespace std;


//Function which returns the sum of votes
int sumVotes (array< int, 5>);

//Function which returns the name of the winner
string winnerIndex (array <string, 5>);

/*These are the arrrays used to store the multiple info required*/
array<int, 5> theVotesReceived;
array<double, 5> thePercentageReceived;
array<string, 5> theCanNames;



int main() {
    //The title
    cout << "ELECTIONS"<<endl;

//Process of asking user to enter the info
    for (size_t i{0}; i < theCanNames.size();++i)

    {
        cout << "\nPlease enter the last name of the candidate"<<endl;
        cin >> theCanNames [i];
        cout << "\nPlease enter the number of votes received by the candidate"<<endl;
        cin >> theVotesReceived [i];
    }


    /* loop which will calculate and store the percentage of votes of each candidate in another array.
     The loop will take each dta in the array of votes and divide it by the sum, obtained by the function sumVotes */
    for (size_t i{0}; i<thePercentageReceived.size();++i)
    {
      thePercentageReceived [i]  = ((theVotesReceived[i]/(double)sumVotes(theVotesReceived))*100);
    }

    //Displaying the information finally
    cout << "\n\n\nCandidate"<< setw(20)<<"Votes Received" << setw(20)<<"% of Total Votes"<<endl<<endl;

    cout.width(12); cout << left << theCanNames[0]<<right<< setw(15)<<theVotesReceived[0]<<right<<setw(18)<<setprecision(3)<<thePercentageReceived[0]<<endl;
    cout.width(12); cout << left << theCanNames[1]<<right<< setw(15)<<theVotesReceived[1]<<right<<setw(18)<<setprecision(3)<<thePercentageReceived[1]<<endl;
    cout.width(12); cout << left << theCanNames[2]<<right<< setw(15)<<theVotesReceived[2]<<right<<setw(18)<<setprecision(3)<<thePercentageReceived[2]<<endl;
    cout.width(12); cout << left << theCanNames[3]<<right<< setw(15)<<theVotesReceived[3]<<right<<setw(18)<<setprecision(3)<<thePercentageReceived[3]<<endl;
    cout.width(12); cout << left << theCanNames[4]<<right<< setw(15)<<theVotesReceived[4]<<right<<setw(18)<<setprecision(3)<<thePercentageReceived[4]<<endl;

    cout.width(12); cout << left <<"\nTotal" << right <<setw(16) <<sumVotes(theVotesReceived) <<endl;

    cout << "\n\nThe winner of the election is " <<winnerIndex(theCanNames)<<"."<<endl<<endl;

    return 0;
}

//Function which returns the total number of votes collected by all the candidates
int sumVotes (array<int,5> theirVotes)
{
    return (theirVotes[0]+theirVotes[1]+theirVotes[2]+theirVotes[3]+ theirVotes[4]);
}


/*Function which returns the name of winner. There is a loop to look for the candidate with the most votes and the index for that candidate is found.
  That index will give the candidates name from the array of names and thus return the name of the winner*/
string winnerIndex(array<string, 5> Jo)
{
    size_t theIndexForTheWinner{0};
            int test{0};
    for (size_t i = 0; i <= theVotesReceived.size(); ++i)
    {
        if (theVotesReceived[i]>test)
        {
            test = theVotesReceived[i];
            theIndexForTheWinner = i;
        }
    }

    return theCanNames[theIndexForTheWinner];
}