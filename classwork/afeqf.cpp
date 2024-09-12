// a university need to sort student's exam course to determinie the cut off marks for admissions , the scores are real numbers ranging from 0 to 100
// and the university wants  to use a sorting  algorithm that effciently handles this specific range .
#include <iostream>
#include <vector>
using namespace std;

// yeh lo bucket sort function 
void bubbleSort(vector<float> &bucket)
{
    for (int i = 0; i < bucket.size() - 1; i++)
    {
        for (int j = 0; j < bucket.size() - i - 1; j++)
        {
            if (bucket[j] > bucket[j + 1])
            {
                // Swap bucket[j] and bucket[j + 1]
                float temp = bucket[j];
                bucket[j] = bucket[j + 1];
                bucket[j + 1] = temp;
            }
        }
    }
}

// Function to perform bucket sort on the scores
void bucketSort(vector<float> &scores)
{
    // Number of buckets
    int bucketCount = 10;
    vector<vector<float>> buckets(bucketCount);

    for (float score : scores)
    {
        int index = score / 10;  // Bucket index based on the score range (0-100)
        buckets[index].push_back(score);
    }

    // Sort individual buckets using bubble sort
    for (int i = 0; i < bucketCount; i++)
    {
        bubbleSort(buckets[i]);
    }

    // Concatenate all sorted buckets into the original scores vector
    int idx = 0;
    for (int i = 0; i < bucketCount; i++)
    {
        for (float score : buckets[i])
        {
            scores[idx++] = score;
        }
    }
}

int main()
{
    // Test case: Scores of students
    vector<float> scores = {95.5, 67.8, 88.9, 45.6, 56.7, 73.4, 89.0, 12.3, 33.9, 67.0};

    cout << "Original Scores: ";
    for (float score : scores)
        cout << score << " ";
    cout << endl;

    // Perform bucket sort on the scores
    bucketSort(scores);

    cout << "Sorted Scores: ";
    for (float score : scores)
        cout << score << " ";
    cout << endl;

    return 0;
}
