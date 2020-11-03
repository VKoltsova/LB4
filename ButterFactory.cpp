#include "ButterFactory.h"
#include <Windows.h>

void ButterFactory::setButterFatContent(int butterFatContent) {
	this->butterFatContent = butterFatContent;
}

void ButterFactory::setButterShelfLife(int butterShelfLife) {
	this->butterShelfLife = butterShelfLife;
}

int ButterFactory::getButterFatContent() {
	return butterFatContent;
}

int ButterFactory::getButterShelfLife() {
	return butterShelfLife;
}

void ButterFactory::print() {
	Factory::print();
	cout << "Жирность сливочного масла: " << butterFatContent << endl;
	cout << "Срок годности сливочного масла: " << butterShelfLife << endl;
}

void ButterFactory::produceButterPacks() {
	cout << "(звуки работы загустителей масла)";

	for (int i = 0; i < 6; i++) {
		Sleep(1000);
		cout << ".";
	}

	cout << endl << "УУУ... теперь новый вид масла Щучыншчына поступает с конвеера и имеет "
		<< butterFatContent << "%-ов жира и " << butterShelfLife << " дней срока годности." << endl;
}