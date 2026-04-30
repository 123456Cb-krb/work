// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CropRecord.h"
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

//float determineAverageCrop_pH(const std::string& filename);
//std::vector<CropRecord> readDataInFile(const std::string& filename);



int main()
{


	string filename = "C:/Users/cbail/Downloads/Crop.csv";

	auto crops = readDataInFile(filename);

	int numberOfPomegranates = 0;

	for (int rowNumber = 0; rowNumber < crops.size(); ++rowNumber)
	{
		if (crops.at(rowNumber).name == "pomegranate")
		{
			numberOfPomegranates = numberOfPomegranates +1;
		}


		cout << "The number of Pomegrantes in that dataset is: " << numberOfPomegranates << "\n";

		

		vector<int> nums = { 1, 2, 3 };

		int sumOfPomegrantesNitrogen = 0;

		for (int rowNumber = 0; rowNumber < crops.size(); ++rowNumber)
		{
			sumOfPomegrantesNitrogen = sumOfPomegrantesNitrogen + crops[numberOfPomegranates].nitrogen;
		}

		int avergePomegrantesNitrogen = sumOfPomegrantesNitrogen / numberOfPomegranates;

		cout << "Average Nitrogen is: " << avergePomegrantesNitrogen << "\n";

			float sumOfAll_ph = 0.0f;

			for (int rowNumber = 0; rowNumber < numberOfPomegranates; ++rowNumber)
			{
				sumOfAll_ph = sumOfAll_ph + crops[rowNumber].pH;
			}

			//cout << sumOfall_ph << "\n";

			float average_PH = sumOfAll_ph / crops.size();

			cout << "Average pH is: " << average_PH << "\n";
			
			float sumOfAllSulfur = 0.0F;

			for (int rowNumber = 0; rowNumber < crops.size(); ++rowNumber)
			{
				sumOfAllSulfur = sumOfAllSulfur + crops[rowNumber].sulfur;
			}

			float averageSulfur = sumOfAllSulfur / crops.size();

			cout << "Average Sulfur is: " << averageSulfur << "\n";

			float sumOfAllCopper = 0.0f; 

			for (int rowNumber = 0; rowNumber < crops.size(); ++rowNumber)
			{
				sumOfAllCopper = sumOfAllCopper + crops[rowNumber].copper;
			}

			float averageCopper = sumOfAllCopper / crops.size();

			cout << "Average Copper is: " << averageCopper << "\n";

			//cout << sumOfAllSulfur << "\n";


			//system("pause");

				//
				//	
				//	float averagecrops = 0.0;
				//
				//	cout << averagecrops << endl;
				//
				//	auto crops = readDataInFile(filename);



					//string filename = "C:/Users/cbail/Downloads/Crop.csv";

					//readDataInFile(filename);

					//return 0;

				//cout << "Loaded " << crops.size() << " crop records\n";
		
	}




}


//
//float determineAverageCrop_pH(const std::string& filename)
//{
//	return 0.0f;
//}
//
//std::vector<CropRecord> readDataInFile(const std::string& filename)
//{
//	return std::vector<CropRecord>();
//}

