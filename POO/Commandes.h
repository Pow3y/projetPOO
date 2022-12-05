#pragma once

using namespace System;

ref class Commandes 
{
public:
	Commandes();
	~Commandes();
	void Create() ;
	void Remove() ;
	void Update() ;
private:
	int CommandId;
	DateTime DateDeLivraison;
	DateTime DateDEmission;
};


