#pragma once
#include <sstream> 
#include <string>
#include <vector>
#include <fstream>
#include <iostream>


using namespace std;

struct CropRecord
{
	int nitrogen = 0;
	float pH = 0.0f;
	float sulfur = 0.0F;
	float copper = 0.0f;
	string name;

};

inline float determineAverageCrop_pH(const std::string& filename)
{
	return 0.0f;
}

vector<CropRecord> readDataInFile(const string& filename)
{

	ifstream fin(filename);

	vector<CropRecord> crops;

	//make sure that the file 
	if (fin.is_open() == false)
	{
		cout << "File was not found\n";
		return {}; //go no further
	}


	string currentRow;
	while (getline(fin, currentRow))
	{
		CropRecord currentCrop; 

		stringstream ss(currentRow);

		string currentPartOfRow; 
		getline(ss, currentPartOfRow, ','); //nitrogen
		//cout << currentPartOfRow << "\n";
		currentCrop.nitrogen = stoi(currentPartOfRow);


		getline(ss, currentPartOfRow, ','); //pH
		//cout << currentPartOfRow << "\n";
		currentCrop.pH = stof(currentPartOfRow);

		getline(ss, currentPartOfRow, ','); //sulfur
		//cout << currentPartOfRow << "\n";
		currentCrop.sulfur = stof(currentPartOfRow);

		getline(ss, currentPartOfRow, ','); //copper
		//cout << currentPartOfRow << "\n";
		currentCrop.copper = stof(currentPartOfRow);

		getline(ss, currentPartOfRow, ','); //name
		//cout << currentPartOfRow << "\n";
		currentCrop.name = currentPartOfRow;

		
		//currentCrop.copper = stof(currentRow); //convert a string to a float

		//cout << currentRow << "\n";

		crops.push_back(currentCrop); 

	
	}

	return crops;


}


//float determineAverageCrop_pH(const vector<CropRecord>& Crops) {
//	if (Crops.empty()) return 0.0f;
//
//	float sum = 0.0f;
//	for (const auto& c : Crops)
//		sum += c.pH;
//
//	return sum / static_cast<float>(Crops.size());


//float determineAverageCrop_pH(const vector<CropRecord>& Crops)
//{
//
//	if (Crops.empty()) return 0.0f;
//	float sum = 0.0f;
//	for (const auto& c : Crops) sum += c.pH;
//	return sum / static_cast<float>(Crops.size());
//	{
//			CropRecord
//
//				float currentCrop_pH;
//			fin >> currentCrop_pH;
//
//			Crop_pH.push_back(currentCrop_pH);
//		}
//
//
//		return 0.0f;
//
//	}