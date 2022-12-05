#pragma once

using namespace System;

ref class Commandes 
{
public:
	Commandes();
	~Commandes();
	void Create() override;
	void Remove() override;
	void Update() override;
private:
	int CommandId;
	DateTime DateDeLivraison;
	DateTime DateDEmission;
};


