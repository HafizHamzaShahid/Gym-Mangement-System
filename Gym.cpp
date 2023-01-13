#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

class trainer
{
private:
	int trainer_id;
	string trainer_name;

public:

	trainer()
	{
		trainer_id = 0;
		trainer_name = '\0';
	}
	trainer(int id, string name)
	{
		trainer_id = id;
		trainer_name = name;
	}
	int getTrainerId()
	{
		return trainer_id;
	}
	void setTrainerId(int id)
	{
		trainer_id = id;
	}
	void setTrainerName(string name)
	{
		trainer_name = name;
	}
	string getTrainerName()
	{
		return  trainer_name;
	}
	void getTrainerName(string name)
	{
		trainer_name = name;
	}
	void printTrainer()
	{
		cout << endl << "                                                  Trainer Id : " << trainer_id << "          ";
		cout << "Trainer Name : " << trainer_name << endl;
	}
};

class equipment
{
private:
	int equip_id;
	string equip_name;


public:
	equipment()
	{
		equip_id = 0;
		equip_name = '\0';
	}
	equipment(int id, string eq_name)
	{
		equip_id = id;
		equip_name = eq_name;
	}

	void setEquipId(int id)
	{
		equip_id = id;
	}
	int getEquipId()
	{
		return equip_id;
	}
	void setEquipName(string name)
	{
		equip_name = name;
	}
	string getEquipName()
	{
		return equip_name;
	}
	void PrintEquipment()
	{
		cout << endl << "                                                 Equipment Id : " << equip_id << "          Equipment Name : " << equip_name << endl;

	}

};

class exerciseplan
{
private:
	int plan_id;
	int train_id;
	int equip_id;
	int duration;

public:
	exerciseplan()
	{
		plan_id = 0;
		train_id = 0;
		equip_id = 0;
		duration = 0;
	}
	exerciseplan(int id, int t_id, int e_id, int d)
	{
		plan_id = id;
		train_id = t_id;
		equip_id = e_id;
		duration = d;
	}
	void setPlainId(int id)
	{
		plan_id = id;
	}
	int getPlainId()
	{
		return plan_id;

	}
	void setTrainid(int id)
	{
		train_id = id;
	}
	int getTrainId()
	{
		return train_id;

	}
	void setEquipId(int id)
	{
		equip_id = id;
	}
	int getEqipId()
	{
		return equip_id;

	}
	void setduration(int d)
	{
		duration = d;
	}
	int getDuration()
	{
		return duration;
	}
	void PrintExercisePlan()
	{
		cout << endl << "                                            Plan Id : " << plan_id << "     ";
		cout << "Trainer Id : " << train_id << "     ";
		cout << "Equipment Id : " << equip_id << "       ";
		cout << "Duration = " << duration << "      ";
	}
};

class customer
{
private:
	int customer_id;
	string customer_name;
	string customer_email;
	string customer_adress;
	string customer_number;

public:
	customer()
	{
		customer_id = 0;
		customer_name = '\0';
		customer_email = '\0';
		customer_adress = '\0';
		//subs = nullptr;
	}
	customer(int id, string name, string customer_email, string customer_number, string customer_adress)
	{
		customer_id = id;
		customer_name = name;
		this->customer_email = customer_email;
		this->customer_number = customer_number;
		this->customer_adress = customer_adress;
	}
	void setCustomerId(int id)
	{
		customer_id = id;
	}
	int getCustomerId()
	{
		return customer_id;
	}
	void setCustomerName(string name)
	{
		customer_name = name;
	}
	string getCustomerName()
	{
		return customer_name;
	}
	void setCustomerEmail(string email)
	{
		customer_email = email;
	}
	string getCustomerEmail()
	{
		return customer_email;
	}
	void setCustomerAdress(string adress)
	{
		customer_adress = adress;
	}
	string getCustomerAdress()
	{
		return customer_adress;
	}
	void setCustomerNumber(string num)
	{

		{
			customer_number = num;
		}
	}
	string getCustomerNumber()
	{
		return customer_number;
	}
	void PrintCustomer()
	{
		cout << endl << "     Customer ID : " << customer_id << "    Customer Name : " << customer_name << "   Customer Phone number : ";
		cout << customer_number << "   Customer Email : " << customer_email << "   Customer Adress : " << customer_adress << endl;

	}


};

class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	Date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	Date(const Date& d)
	{
		day = d.day;
		month = d.month;
		year = d.year;
	}
	void setDay(int d)
	{
		day = d;
	}
	int getDay()
	{
		return day;
	}
	void setMonth(int m)
	{
		month = m;
	}
	int getMonth()
	{
		return month;
	}
	void setYear(int y)
	{
		year = y;
	}
	int getYear()
	{
		return year;
	}
	void setDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void PrintDate()
	{
		cout << day << "/" << month << "/" << year;
	}
};

class subscription
{
private:
	int subs_id;
	int cust_id;
	int plain_id;

public:
	Date date;
	subscription()
	{
		subs_id = 0;
		cust_id = 0;
		plain_id = 0;
	}
	subscription(int sid, Date& d, int cid, int pid)
	{
		subs_id = sid;
		cust_id = cid;
		plain_id = pid;
		date = d;

	}
	void setSubId(int id)
	{
		subs_id = id;
	}
	int getSubsId()
	{
		return subs_id;
	}
	void setPlainId(int id)
	{
		plain_id = id;
	}
	int getPlainId()
	{
		return plain_id;
	}
	void setCustId(int id)
	{
		cust_id = id;
	}
	int getCustId()
	{
		return cust_id;
	}
	Date getDate()
	{
		return date;
	}
	void printSubscription()
	{
		cout << endl << "                                  Subscription ID : " << subs_id << "    ";
		cout << "Exercise date : "; date.PrintDate();
		cout << "    ";
		cout << "Customer ID : " << cust_id << "    ";
		cout << "Exercise Plan ID : " << plain_id << "    ";




	}

};

class Gym
{
private:
	string GymName;
	equipment* equip;
	trainer* train;
	customer* custom;
	exerciseplan* eplan;
	subscription* subs;
	int trainer_count;
	int customer_count;
	int equip_count;
	int exerciseplan_count;
	int subscription_count;
	const int max_subscriptions = 20;
	const int max_exerciseplan = 20;
	const int max_customer = 20;
	const int max_trainers = 5;
	const int max_equipments = 20;
public:

	Gym()
	{
		GymName = "fAST NUCES GYM";
		trainer_count = 0;
		customer_count = 0;
		exerciseplan_count = 0;
		equip = nullptr;
		train = nullptr;
	}

	string getGymName()
	{
		return GymName;
	}
	void setGymName(string n)
	{
		GymName = n;
	}

	void addTrainers()
	{
		int j = 0;
		string name;
		train = new trainer[max_trainers];
		ifstream fin("trainers.txt");

		if (fin.is_open())
		{

			for (int i = 0; !fin.eof() && trainer_count < max_trainers; i++)
			{

				fin >> j;
				getline(fin, name);
				bool found = false;
				for (int k = 0; k < trainer_count; k++)
				{
					if (train[k].getTrainerId() == j && train[k].getTrainerName() == name)
					{
						//cout << endl << " Trainer with id " << train[k].getTrainerId() << " and name " << train[k].getTrainerName() << " already exists" << endl;
						found = true;
						break;
					}
				}

				bool same_id = false;
				for (int l = 0; l < trainer_count; l++)
				{
					if (train[l].getTrainerId() == j && train[l].getTrainerName() != name)
					{
						//cout << endl << " Trainer with id " << train[l].getTrainerId() << " already exists" << endl;
						same_id = true;
						break;
					}

				}
				if (found == false && same_id == false)
				{
					train[trainer_count].setTrainerId(j);
					train[trainer_count].setTrainerName(name);
					trainer_count++;
				}
			}

			fin.close();

		}

		else
		{
			cout << "file not open !" << endl;
		}
	}
	void AddaTrainer(trainer& t)
	{
		if (trainer_count == 0)
		{
			train = new trainer[5];
			train[trainer_count].setTrainerId(t.getTrainerId());
			train[trainer_count].setTrainerName(t.getTrainerName());
			trainer_count++;
			cout << endl << "trainer added " << endl;
			
			return;

		}


		else if(trainer_count!=0)
		{
		if (trainer_count >= 5)
		{
			cout << endl << "Vacances are full no more trainers can be accoumudated" << endl;
			return;
		}


		for (int i = 0; i < trainer_count; i++)
		{
			if (train[i].getTrainerId() == t.getTrainerId() && train[i].getTrainerName() == t.getTrainerName())
			{
				cout << endl << " Trainer with id " << train[i].getTrainerId() << " and name " << train[i].getTrainerName() << " already exists" << endl;
				return;
			}

		}
		for (int i = 0; i < trainer_count; i++)
		{
			if (train[i].getTrainerId() == t.getTrainerId() && train[i].getTrainerName() != t.getTrainerName())
			{
				cout << endl << " Trainer with id " << train[i].getTrainerId() << " already exists" << endl;
				return;
			}

		}


		train[trainer_count].setTrainerId(t.getTrainerId());
		train[trainer_count].setTrainerName(t.getTrainerName());
		if (trainer_count == 4)
		{
			cout << endl << "trainer added and vacances have become full" << endl;

		}
		else
			cout << endl << "trainer added " << endl;
		trainer_count++;
		return;
	}
	}
	int TrainerWorkingHour(int t_id)
	{
		int workinghours = 0;
		int minutes = 0;
		for (int i = 0; i < exerciseplan_count; i++)
		{
			if (t_id == eplan[i].getTrainId())
			{
				minutes += eplan[i].getDuration();
				if (minutes > 60)
				{
					while (minutes >= 60)
					{
						minutes = minutes - 60;
						workinghours++;
					}
				}
			}

		}
		return workinghours;

	}
	void updateTrainerInfo(int id)
	{
		for (int i = 0; i < trainer_count; i++)
		{
			if (id == train[i].getTrainerId())
			{
				int op;
				cout << endl << "trainer found." << endl;
				cout << "What do you want to update ?" << endl;
				cout << "for ID updae press '1' " << endl;
				cout << "for Name update enter '2'" << endl;
				cout << " to update whole trainer information enter 3" << endl;

				cin >> op;
				if (op == 1)
				{
					int nid;
					bool found = true;
					cout << "enter new id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < trainer_count; i++)
						{
							if (train[i].getTrainerId() == nid)
							{
								cout << endl << " Trainer with id " << train[i].getTrainerId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new trainner id again as it already exists : ";
							cin >> nid;
						}

					}

					if (found == false)
					{
						train[i].setTrainerId(nid);
						cout << "trainer id updated successfully :)" << endl;
						return;
					}
				}
				else if (op == 2)
				{
					string n;
					cout << "enter new name : ";
					cin.ignore();
					getline(cin, n);
					bool found = true;
					while (found != false)
					{
						if (train[i].getTrainerName() != n)

						{
							train[i].setTrainerName(n);
							cout << "trainer name updated successfully :)" << endl;
							found = false;
							return;
						}

						else
						{
							found = true;
							cout << "Trainer name is already this enter new trainer name again : ";
							cin >> n;
						}
					}
				}

				else if (op == 3)
				{

					string n;
					int nid;
					cout << "Enter new id : ";
					cin >> nid;
					cout << "Enter new name : ";
					cin.ignore();
					getline(cin, n);
					bool found = true;
					while (found != false)
					{
						for (int i = 0; i < trainer_count; i++)
						{
							if (train[i].getTrainerId() == nid)
							{
								cout << endl << " Trainer with id " << train[i].getTrainerId() << " and name " << train[i].getTrainerName() << " already exists" << endl;
								found = true;
								break;
							}
							else
								found = false;

						}
						if (found == true)
						{
							cout << "please enter new trainner id again as it already exists : ";
							cin >> nid;
						}
					}


					train[i].setTrainerId(nid);
					train[i].setTrainerName(n);
					cout << "trainer name and id updated successfully :)" << endl;
					return;
				}
			}
		}
		cout << endl << "trainer with given id not found :(" << endl;
	}
	void removeaTrainer()
	{
		//trainers.Print();
		cout << endl << "Which trainer you want to rermove? Enter its Id " << endl;
		int id;
		cin >> id;

		int i = 0;
		bool f=false;
		for (i = 0; i < trainer_count; i++)
		{
			if (id == train[i].getTrainerId())
			{

				for (int j = i; j < trainer_count - 1; j++)
				{
					train[j] = train[j + 1];
					if (id == train[j + 1].getTrainerId())
					{
						i--;
					  
					}
				}
				trainer_count--;
				cout << endl << "trainer with id " << "'" << id << "' removed" << endl;
				f = true;
			}

		}
		if (f == false)
		{
			cout <<endl<< "invalid entry" << endl;
			return;
		}

		int k = 0;
		for (k = 0; k < exerciseplan_count; k++)
		{
			if (id == eplan[k].getTrainId())
			{

				for (int j = k; j < exerciseplan_count - 1; j++)
				{

					eplan[j] = eplan[j + 1];
					if (id == eplan[j + 1].getTrainId())
					{
						k++;
					}


				}
				exerciseplan_count--;

				cout << endl << "Exercise Plans containing trainer id " << "'" << id << "' removed" << endl;

			}

		}

	}

	void addEquipments()
	{

		int j = 0;
		string name;

		ifstream fin("equipment.txt");
		if (fin.is_open())
		{
			for (int i = 0; !fin.eof() && equip_count < max_equipments; i++)
			{
				if (equip_count == 0)
				{
					equip = new equipment[max_equipments];
					fin >> j;
					equip[equip_count].setEquipId(j);
					getline(fin, name);
					equip[equip_count].setEquipName(name);
					equip_count++;

				}
				else if (equip_count != 0)
				{
					fin >> j;
					getline(fin, name);
					bool found = false;
					for (int k = 0; k < equip_count; k++)
					{
						if (equip[k].getEquipId() == j && equip[k].getEquipName() == name)
						{
							//	cout << endl << " equipment with id " << equip[k].getEquipId() << " and name " << equip[k].getEquipName() << " already exists" << endl;
							found = true;
							break;
						}
					}

					bool same_id = false;
					for (int l = 0; l < equip_count; l++)
					{
						if (equip[l].getEquipId() == j && equip[l].getEquipName() != name)
						{
							//	cout << endl << " Equipment with id " << equip[l].getEquipId() << " already exists" << endl;
							same_id = true;
							break;
						}

					}
					if (found == false && same_id == false)
					{
						equip[equip_count].setEquipId(j);
						equip[equip_count].setEquipName(name);
						equip_count++;
					}
				}
			}

			fin.close();
		}

		else
			cout << endl << "file 'equipment.txt' not open " << endl;
	}
	void addanEquipment(equipment e)
	{
		if (equip_count == 0)
		{
			equip = new equipment[max_equipments];
			equip[equip_count].setEquipId(e.getEquipId());
			equip[equip_count].setEquipName(e.getEquipName());
			equip_count++;
			cout << endl << "equipment added " << endl;
			return;
		}
		else
		{

			if (equip_count >= 20)
			{
				cout << endl << "Space is full no more trainers can be accoumudated" << endl;
				return;
			}

			if (equip_count == 19)
			{
				cout << endl << "equipment added and space have become full" << endl;

			}
			for (int i = 0; i < equip_count; i++)
			{
				if (equip[i].getEquipId() == e.getEquipId() && equip[i].getEquipName() == e.getEquipName())
				{
					cout << endl << " Equipment with id " << equip[i].getEquipId() << " and name " << equip[i].getEquipName() << " already exists" << endl;
					return;
				}

			}
			for (int i = 0; i < equip_count; i++)
			{
				if (equip[i].getEquipId() == e.getEquipId() && equip[i].getEquipName() != e.getEquipName())
				{
					cout << endl << " Equipment with id " << equip[i].getEquipId() << " already exists" << endl;
					return;
				}

			}


			equip[equip_count].setEquipId(e.getEquipId());
			equip[equip_count].setEquipName(e.getEquipName());
			equip_count++;
			cout << endl << "equipment added " << endl;
			return;
		}

	}
	void updateEquipmentInfo(int id)
	{
		for (int i = 0; i < equip_count; i++)
		{
			if (id == equip[i].getEquipId())
			{
				int op;
				cout << endl << "Equipment  Id found." << endl;
				cout << "What do you want to update ?" << endl;
				cout << "for ID updae press '1' " << endl;
				cout << "for Name update enter '2'" << endl;
				cout << " to update whole equipment information enter 3" << endl;

				cin >> op;
				if (op == 1)
				{
					int nid;
					bool found = true;
					cout << "enter new id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < equip_count; i++)
						{
							if (equip[i].getEquipId() == nid)
							{
								cout << endl << " Equipment with id " << equip[i].getEquipId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new Equipment id again as it already exists : ";
							cin >> nid;
						}

					}

					if (found == false)
					{
						equip[i].setEquipId(nid);
						cout << "Equipment Id updated successfully :)" << endl;
						return;
					}
				}
				else if (op == 2)
				{
					string n;
					cout << "enter new name : ";
					cin.ignore();
					getline(cin, n);
					bool found = true;
					while (found != false)
					{
						if (equip[i].getEquipName() != n)

						{
							equip[i].setEquipName(n);
							cout << "Equipment name updated successfully :)" << endl;
							found = false;
							return;
						}

						else
						{
							found = true;
							cout << "Equipment name is already this enter new trainer name again : ";
							cin >> n;
						}
					}
				}

				else if (op == 3)
				{

					string n;
					int nid;
					cout << "Enter new id : ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter new name : ";
					getline(cin, n);
					bool found = true;
					while (found != false)
					{
						for (int i = 0; i < equip_count; i++)
						{
							if (equip[i].getEquipId() == nid)
							{
								cout << endl << " Equipment with id " << equip[i].getEquipId() << " and name " << equip[i].getEquipName() << " already exists" << endl;
								found = true;
								break;
							}
							else
								found = false;

						}
						if (found == true)
						{
							cout << "please enter new equipment id again as it already exists : ";
							cin >> nid;
						}
					}


					equip[i].setEquipId(nid);
					equip[i].setEquipName(n);
					cout << "Equipment name and id updated successfully :)" << endl;
					return;
				}
			}
		}
		cout << endl << "Equipment with given id not found :(" << endl;
	}
	void removeanEquipment()
	{
		//trainers.Print();
		cout << endl << "Which equipment you want to remove? Please enter its Id " << endl;
		int id;
		cin >> id;

		int i = 0;
		bool f = false;
		for (i = 0; i < equip_count; i++)
		{
			if (id == equip[i].getEquipId())
			{

				for (int j = i; j < equip_count - 1; j++)
				{
					equip[j] = equip[j + 1];
					if (id == equip[j + 1].getEquipId())
					{
						
						i--;
					}
				}
				equip_count--;
				cout << endl << "Equipments with id " << "'" << id << "' removed" << endl;
				f = true;
			}

		}

		if (f == false)
		{
			cout << endl << "invalid entry" << endl;
			return;
		}
		int k = 0;
		for (k = 0; k < exerciseplan_count; k++)
		{
			if (id == eplan[k].getEqipId())
			{
				for (int j = k; j < exerciseplan_count - 1; j++)
				{
					eplan[j] = eplan[j + 1];
					if (id == eplan[j + 1].getPlainId())
					{
						k--;
					}
				}
				exerciseplan_count--;
				cout << endl << "Exercise Plan using equipment with id " << "'" << id << "' removed" << endl;
			}

		}


	}

	void addcustomers()
	{
		int id;
		string n;
		string adr;
		string num;
		string ema;
		custom = new customer[max_customer];

		ifstream fin("customers.txt");
		if (fin.is_open())
		{
			for (int i = 0; !fin.eof() && customer_count < max_customer; i++)
			{
				if (customer_count == 0)
				{
					fin >> id;
					fin >> n;
					fin >> adr;
					fin >> num;
					fin >> ema;

					custom[customer_count].setCustomerId(id);
					custom[customer_count].setCustomerName(n);
					custom[customer_count].setCustomerAdress(adr);
					custom[customer_count].setCustomerNumber(num);
					custom[customer_count].setCustomerEmail(ema);

					customer_count++;

				}
				else if (customer_count != 0)
				{
					fin >> id;
					fin >> n;
					fin >> adr;
					fin >> num;
					fin >> ema;
					bool found = false;
					for (int k = 0; k < customer_count; k++)
					{
						if (custom[k].getCustomerId() == id && custom[k].getCustomerName() == n)
						{
							//	cout << endl << " Customer with id " << custom[k].getCustomerId() << " and name " << custom[k].getCustomerName() << " already exists" << endl;
							found = true;
							break;
						}
					}

					bool same_id = false;
					for (int l = 0; l < customer_count; l++)
					{
						if (custom[l].getCustomerId() == id && custom[l].getCustomerName() != n)
						{
							//cout << endl << " Customer with id " << custom[l].getCustomerId() << " already exists" << endl;
							same_id = true;
							break;
						}

					}
					if (found == false && same_id == false)
					{
						custom[customer_count].setCustomerId(id);
						custom[customer_count].setCustomerName(n);
						custom[customer_count].setCustomerAdress(adr);
						custom[customer_count].setCustomerNumber(num);
						custom[customer_count].setCustomerEmail(ema);
						customer_count++;

					}


				}
			}
			fin.close();
		}

		else
			cout << endl << "file 'customer.txt' not open" << endl;
	}
	void addaCustomer(customer& c)
	{
		if (customer_count == 0)
		{
			custom = new customer[max_customer];
			custom[customer_count].setCustomerId(c.getCustomerId());
			custom[customer_count].setCustomerName(c.getCustomerName());
			custom[customer_count].setCustomerAdress(c.getCustomerAdress());
			custom[customer_count].setCustomerNumber(c.getCustomerNumber());
			custom[customer_count].setCustomerEmail(c.getCustomerEmail());
			customer_count++;
			cout << "Customer added Successfully :)" << endl;
			return;
		}
		else if (customer_count != 0)
		{
		
		if (customer_count >= 20)
		{
			cout << endl << "Space is full no more customer can be accoumudated" << endl;
			return;
		}

		if (customer_count == 19)
		{
			cout << endl << "Customer  added and space have become full" << endl;

		}
		for (int i = 0; i < customer_count; i++)
		{
			if (custom[i].getCustomerId() == c.getCustomerId() && custom[i].getCustomerName() == c.getCustomerName())
			{
				cout << endl << " Customer with id " << custom[i].getCustomerId() << "and name " << custom[i].getCustomerName() << " already exists" << endl;

				return;
			}
		}
		for (int i = 0; i < customer_count; i++)
		{
			if (custom[i].getCustomerId() == c.getCustomerId() && custom[i].getCustomerName() != c.getCustomerName())
			{

				cout << endl << " Customer with id " << custom[i].getCustomerId() << " already exists" << endl;
				return;
			}
		}

		
		
			custom[customer_count].setCustomerId(c.getCustomerId());
			custom[customer_count].setCustomerName(c.getCustomerName());
			custom[customer_count].setCustomerAdress(c.getCustomerAdress());
			custom[customer_count].setCustomerNumber(c.getCustomerNumber());
			custom[customer_count].setCustomerEmail(c.getCustomerEmail());
			customer_count++;
			cout << endl<<"Customer added Successfully :)" << endl;

		}

	}
	void updateCustomerInfo(int id)
	{
		for (int i = 0; i < customer_count; i++)
		{
			if (id == custom[i].getCustomerId())
			{
				int op;
				cout << endl << "Customer found." << endl;
				cout << " What do you want to update? " << endl;
				cout << " -> For ID updae Press '1' " << endl;
				cout << " -> For Name update Press '2'" << endl;
				cout << " -> For Number update Press '3'" << endl;
				cout << " -> For Adress update Press '4'" << endl;
				cout << " -> For Email update press '5'" << endl;
				cout << " -> To update whole Customer information enter '6'" << endl;

				cin >> op;
				if (op == 1)
				{
					int nid;
					bool found = true;
					cout << "enter new id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < customer_count; i++)
						{
							if (custom[i].getCustomerId() == nid)
							{
								cout << endl << " Customer with id " << custom[i].getCustomerId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new customer id again as it already exists : ";
							cin >> nid;
						}

					}

					if (found == false)
					{
						custom[i].setCustomerId(nid);
						cout << "Customer id updated successfully :)" << endl;
						return;
					}
				}

				else if (op == 2)
				{
					string n;
					cout << "enter new name : ";
					cin.ignore();
					getline(cin, n);
					bool found = true;
					while (found != false)
					{
						if (custom[i].getCustomerName() != n)

						{
							custom[i].setCustomerName(n);
							cout << "Customer name updated successfully :)" << endl;
							found = false;
							return;
						}

						else
						{
							found = true;
							cout << "Customer name is already this enter new Customer name again : ";
							cin >> n;
						}
					}
				}

				else if (op == 3)
				{
					string num;
					cout << endl << "Enter new number : ";
					cin.ignore();
					getline(cin, num);
					custom[i].setCustomerNumber(num);
					cout << "Customers number updated suuccessfully :)" << endl;
					return;
				}

				else if (op == 4)
				{
					string address;
					cout << endl << "Enter new Adress : ";
					cin.ignore();
					getline(cin, address);
					custom[i].setCustomerAdress(address);
					cout << "Customers Adress updated suuccessfully :)" << endl;
					return;


				}

				else if (op == 5)
				{
					string email;
					cout << endl << "Enter new Email Adress : ";
					cin.ignore();
					getline(cin, email);
					custom[i].setCustomerEmail(email);
					cout << "Customers Adress updated suuccessfully :)" << endl;
					return;

				}

				else if (op == 6)
				{

					string n;
					int nid;
					string num;
					string adr;
					string ema;
					cout << "Enter new id : ";
					cin >> nid;
					cout << "Enter new name : ";
					cin.ignore();
					getline(cin, n);
					cout << "Enter new number : ";
					getline(cin, num);
					cout << "Enter new adress : ";
					getline(cin, adr);
					cout << "Enter new email adress : ";
					getline(cin, ema);
					bool found = true;
					while (found != false)
					{
						for (int i = 0; i < customer_count; i++)
						{
							if (custom[i].getCustomerId() == nid)
							{
								cout << endl << " customer with id " << custom[i].getCustomerId() << " and name " << custom[i].getCustomerName() << " already exists" << endl;
								found = true;
								break;
							}
							else
								found = false;

						}
						if (found == true)
						{
							cout << "please enter new Customer id again as it already exists : ";
							cin >> nid;
						}
					}


					custom[i].setCustomerId(nid);
					custom[i].setCustomerName(n);
					custom[i].setCustomerNumber(num);
					custom[i].setCustomerEmail(adr);
					custom[i].setCustomerAdress(ema);
					cout << "Customer updated successfully :)" << endl;
					return;
				}


			}

			
		}
		cout << endl << "Customer with given id not found" << endl;
	}
    void removeaCustomer()
{
	//trainers.Print();
	cout << endl << "Which customer you want to remove? Please enter its Id " << endl;
	int id;
	cin >> id;

	int i = 0;
	bool found = false;
	for (i = 0; i < customer_count; i++)
	{
		if (id == custom[i].getCustomerId())
		{

			for (int j = i; j < customer_count - 1; j++)
			{
				custom[j] = custom[j + 1];
				if (id == custom[j + 1].getCustomerId())
				{
					i--;
					
				}
			}
			customer_count--;
			cout << endl << "Customer with id " << "'" << id << "' removed" << endl;
			found = true;
		}

	}

	if (found == false)
	{
		cout << endl << "invalid entry" << endl;
		return;
	}

	int k = 0;
	for (k = 0; k < subscription_count; k++)
	{
		if (id == subs[k].getCustId())
		{

			for (int j = k; j < subscription_count - 1; j++)
			{

				subs[j] = subs[j + 1];
				if (id == subs[j + 1].getCustId())
				{
					k--;
				}

			}
			subscription_count--;
			cout << endl << "Subscriptionns of customer with id " << "'" << id << "' removed" << endl;

		}

	}

}

    void addExercisePlans()
{
	int j = 0;
	int k = 0;
	int s = 0;
	int m = 0;
	ifstream fin("exercisePlans.txt");
	if (fin.is_open())
	{
		eplan = new exerciseplan[max_exerciseplan];
		for (int i = 0; !fin.eof() && exerciseplan_count < max_exerciseplan; i++)
		{
				
				fin >> j;
				fin >> k;
				fin >> s;
				fin >> m;
				bool found = false;
				for (int c = 0; c < exerciseplan_count; c++)
				{
					if (eplan[c].getPlainId() == j)
					{
					//	cout << endl << " Exercise plan with id " << eplan[c].getPlainId() << " already exists" << endl;
						found = true;
						break;
					}
				}

					if ((TrainerWorkingHour(k) + (m/ 60)) > 8)
					{
						//cout << endl << " Exercise plan is not Added Since Trainer already has 8 hours Exercise Plan" << " " << endl;
						break;
					}

					if (found == false)
					{
						eplan[exerciseplan_count].setPlainId(j);

						eplan[exerciseplan_count].setTrainid(k);

						eplan[exerciseplan_count].setEquipId(s);
						eplan[exerciseplan_count].setduration(m);
						exerciseplan_count++;
					}
			}

			if (exerciseplan_count == 19)
			{
				cout << endl << "ExercisePlan added and vacances have become full" << endl;

			}

		fin.close();
	}
	else
		cout << endl << "file 'exercisePlan.txt' not open " << endl;
}
    void addanExercisePlan(exerciseplan p)
    {
		if (exerciseplan_count == 0)
		{
			eplan = new exerciseplan[max_exerciseplan];
			
				bool same_t = false;
				for (int i = 0; i < trainer_count; i++)
				{
					if (train[i].getTrainerId() == p.getTrainId())
					{
						same_t = true;
						break;
					}
				}
				if (same_t == true)
				{
					eplan[exerciseplan_count].setTrainid(p.getTrainId());
				}
				else if (same_t == false)
				{
					cout << endl << "You can't make this exercise plan because the trainer with  id " << p.getTrainId() << " does'nt esist" << endl;
					return;
				}
			

			
				bool same_e = false;
				for (int j = 0; j < equip_count; j++)
				{
					if (p.getEqipId() == equip[j].getEquipId())
					{
						same_e = true;
						break;
					}
				}
				if (same_e == true)
				{
					eplan[exerciseplan_count].setEquipId(p.getEqipId());
				}
				else if (same_e == false)
				{
					cout << "You can't make this exercise plan because the equipment you are trying to add does'nt exist inthe gym :(" << endl;
					return;
				}
			

			

				if ((TrainerWorkingHour(p.getTrainId()) + (p.getDuration()/60)) <= 8)
				{
					eplan[exerciseplan_count].setduration(p.getDuration());
				}
				else

				{
					cout << "You can't addd this exercise plan as trainer you are trying to add exceeds 8 hours working time" << endl;
					return;
				}
			
				bool found = false;
				for (int c = 0; c < exerciseplan_count; c++)
				{
					if (eplan[c].getPlainId() == p.getPlainId())
					{
						cout << endl << " Exercise plan with id " << eplan[c].getPlainId() << " already exists" << endl;
						found = true;
						return;
					}
				}
				if (found == false)
				{
					eplan[exerciseplan_count].setPlainId(p.getPlainId());
				}
	    	 exerciseplan_count++;
	    	 cout << endl << "Exercise Plan added " << endl;
		     return;

	    }

	   else if(exerciseplan_count != 0)
	   {

		if (exerciseplan_count >= 20)
		{
			cout << endl << "Space is full no more exerciseplan can be accoumudated" << endl;
			return;
		}


		bool same_t = false;
		for (int i = 0; i < trainer_count; i++)
		{
			if (train[i].getTrainerId() == p.getTrainId())
			{
				same_t = true;
				break;
			}
		}
		if (same_t == true)
		{
			eplan[exerciseplan_count].setTrainid(p.getTrainId());
		}
		else if (same_t == false)
		{
			cout << endl << "You can't make this exercise plan because the trainer with  id " << p.getTrainId() << " does'nt esist in the Gym" << endl;
			return;
		}
		
		bool same_e = false;
		for (int j = 0; j < equip_count; j++)
		{
			if (p.getEqipId() == equip[j].getEquipId())
			{
				same_e = true;
				break;
			}
		}
		if (same_e == true)
		{
			eplan[exerciseplan_count].setEquipId(p.getEqipId());
		}
		else if (same_e == false)
		{
			cout << "You can't make this exercise plan because the equipment you are trying to add does'nt exist in the gym :(" << endl;
			return;
		}
		

		bool done = true;
		for (int i = 0; i < exerciseplan_count; i++)
		{
			if ((TrainerWorkingHour(p.getTrainId())+(p.getDuration()/60)) > 8 )
			{
				cout << endl << " Exercise plan is not Added Since Trainer already has 8 hours Exercise Plan" << " " << endl;
				done = false;
				return;
			}
		}
		if (done == true)
		{
			eplan[exerciseplan_count].setduration(p.getDuration());
		}

		bool found = false;
		for (int i = 0; i < exerciseplan_count; i++)
		{
			if (eplan[i].getPlainId() == p.getPlainId())
			{
				cout << endl << " Exercise plan with id " << eplan[i].getPlainId() << " already exists" << endl;
				bool found = true;
				return;
			}
		}
		if (found == false)
		{
			eplan[exerciseplan_count].setPlainId(p.getPlainId());
		}
		
		if (exerciseplan_count == 19)
		{
			cout << endl << "Exercise plan  added and space have become full" << endl;

		}
		else 
		cout << endl << "Exercise Plan added " << endl;
		exerciseplan_count++;
		return;
	   }
     }
	void updateExercisePlanInfo(int id)
	{
		for (int i = 0; i < exerciseplan_count; i++)
		{
			if (id == eplan[i].getPlainId())
			{
				int op;
				cout << endl << "Plain  Id found." << endl;
				cout << "What do you want to update ?" << endl;
				cout << "for plain ID updae press '1' " << endl;
				cout << "for trainer id update enter '2'" << endl;
				cout << "for equipment id update enter '3'" << endl;
				cout << "for duration update enter '4'" << endl;
				cout << " to update whole  exerciseplain information enter 5" << endl;

				cin >> op;
				if (op == 1)
				{
					int nid;
					bool found = true;
					cout << "Enter New Id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < exerciseplan_count; i++)
						{
							if (eplan[i].getPlainId() == nid)
							{
								cout << endl << " Exercise Plan with id " << eplan[i].getPlainId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new Exercise Plan id again as it already exists : ";
							cin >> nid;
						}

					}

					if (found == false)
					{
						eplan[i].setPlainId(nid);
						cout << "Exercise Plan Id updated" << endl;
						return;
					}
				}
				else if (op == 2)
				{
					int nid;
					bool found = true;
					cout << "Enter New Id : ";
					cin >> nid;

					bool same_t = false;
					
					for (int k = 0; k < trainer_count; k++)
					{
						if (train[k].getTrainerId() == nid)
						{
							same_t = true;
							break;
						}
					}
					if (same_t == true)
					{
						eplan[i].setTrainid(nid);
					}
					else if (same_t == false)
					{
						cout << endl << "You can't update exercise plan because the trainer with  id " << nid<< " does'nt exist in the Gym" << endl;
						return;
					}

					cout << "Trainer Id updated" << endl;
					return;
				}

				else if (op == 3)
				{
					int nid;
					cout << "enter new id : ";
					cin >> nid;
					bool same_e = false;
					for (int j = 0; j < equip_count; j++)
					{
						if ( nid== equip[j].getEquipId())
						{
							same_e = true;
							break;
						}
					}
					if (same_e == true)
					{
						eplan[i].setEquipId(nid);
					}
					else if (same_e == false)
					{
						cout << "You can't update exercise plan because the equipment you are trying to add does'nt exist in the gym :(" << endl;
						return;
					}

					cout << "Equipment Id in Exercise Plan updated updated" << endl;
					return;
				}

				else if (op == 4)
				{

					int newd;
					cout << "enter new duration : ";
					cin >> newd;
					for (int i = 0; i < exerciseplan_count; i++)
					{
						if ((TrainerWorkingHour(eplan[i].getTrainId()) + (newd / 60)) > 8)
						{
							cout << endl << " Exercise plan is not Updated Since Working hours of Trainer exceeds 8 hours Working Limit" << " " << endl;
							return;
						}
					}
					
					eplan[i].setduration(newd);
					cout << "Duration Updated successfully :)" << endl;
					return;
				}

				else if (op == 5)
				{
					int tid;
					int pid;
					int eid;
					int d;
					cout << "Enter new plan id : ";
					cin >> pid;
					cout << "enter new trainer id ";
					cin >> tid;
					cout << "Enter new equipment id : ";
					cin >> eid;
					cout << "enter new duration ";
					cin >> d;


					bool same_t = false;
					for (int i = 0; i < trainer_count; i++)
					{
						if (train[i].getTrainerId() == tid)
						{
							same_t = true;
							break;
						}
					}
					if (same_t == true)
					{
						eplan[i].setTrainid(tid);
					}
					else if (same_t == false)
					{
						cout << endl << "You can't make this exercise plan because the trainer with  id " << tid << " does'nt exist" << endl;
						return;
					}

						bool same_e = false;
						for (int j = 0; j < equip_count; j++)
						{
							if (eid == equip[j].getEquipId())
							{
								same_e = true;
								break;
							}
						}
						if (same_e == true)
						{
							eplan[i].setEquipId(eid);
						}
						else if (same_e == false)
						{
							cout << "You can't update this exercise plan because the equipment you are trying to add does'nt exist in the gym :(" << endl;
							return;
						}


						bool done = true;
						for (int i = 0; i < exerciseplan_count; i++)
						{
							if ((TrainerWorkingHour(tid) + (d / 60)) > 8)
							{
								cout << endl << " Exercise plan is not Updated Since Working hours of Trainer exceeds 8 hours Working Limit" << " " << endl;
								done = false;
								return;
							}
						}

						if(done==true)
						eplan[i].setduration(d);
					
						
						bool found = false;
						for (int c = 0; c < exerciseplan_count; c++)
						{
							if (eplan[c].getPlainId() == pid)
							{
								cout << endl << " Exercise plan with id " << eplan[c].getPlainId() << " already exists" << endl;
								found = true;
								return;
							}
						}
						if (found == false)
						{
							eplan[i].setPlainId(pid);
						}
					

						cout << "Exercise plan updated" << endl;
						return;
					}
				
			}
			
		}
		
		cout << endl << "Exercise  Plan Id you entered does'nt exists :(" << endl;
	}
    void removeExercisePlan()
{
	//trainers.Print();
	cout << endl << "Which Exercise Plan you want to remove? Please enter its Id " << endl;
	int id;
	cin >> id;

	int i = 0;
	for (i = 0; i < exerciseplan_count; i++)
	{
		if (id == eplan[i].getPlainId())
		{

			for (int j = i; j < exerciseplan_count - 1; j++)
			{
				eplan[j] = eplan[j + 1];
				if (id == eplan[j + 1].getPlainId())
				{
					i--;
				}
			}
			exerciseplan_count--;
			cout << endl << "Exercise Plan with id " << "'" << id << "' removed" << endl;
			return;
		}

	}
	cout << endl << "Invalid entry" << endl;

}

    void addSubscriptions()
{
	int sid = 0;
	int pid = 0;
	int cid = 0;
	int d;
	int m;
	int y;
	ifstream fin("subsription.txt");
	if (fin.is_open())
	{
		subs = new subscription[max_subscriptions];
		for (int i = 0; !fin.eof() && subscription_count < max_subscriptions; i++)
		{


			fin >> sid;
			bool found = false;
			for (int i = 0; i < subscription_count; i++)
			{
				if (subs[i].getSubsId() == sid)
				{
					found = true;
					break;
				}

			}
			if (found == false)
			{

				subs[subscription_count].setSubId(sid);
				fin >> d;
				subs[subscription_count].date.setDay(d);
				fin >> m;
				subs[subscription_count].date.setMonth(m);
				fin >> y;
				subs[subscription_count].date.setYear(y);
				fin >> pid;
				subs[subscription_count].setCustId(pid);
				fin >> cid;
				subs[subscription_count].setPlainId(cid);
				subscription_count++;
			}
		}
		fin.close();
	}

	else
		cout << endl << "file 'customer.txt' not open" << endl;
}
    void addaSubscription(subscription s)
   {
	 if (subscription_count == 0)
	{
		subs = new subscription[max_subscriptions];
		subs[subscription_count].setSubId(s.getSubsId());
		subs[subscription_count].date.setDay(s.date.getDay());
		subs[subscription_count].date.setMonth(s.date.getMonth());
		subs[subscription_count].date.setYear(s.date.getYear());
		subs[subscription_count].setCustId(s.getCustId());
		subs[subscription_count].setPlainId(s.getPlainId());
		subscription_count++;
		cout << endl << "subscriptionPlan added  " << endl;
		return;

	}

	 else
	 {
		 if (subscription_count >= 50)
		 {
			 cout << endl << "Space is full no more subscription can be accoumudated" << endl;
			 return;
		 }

		 if (subscription_count == 49)
		 {
			 cout << endl << "Subscription  added and space have become full" << endl;
		 }

		 bool found_c = false;
		 for (int i = 0; i < customer_count; i++)
		 {
			 if (custom[i].getCustomerId() == s.getCustId())
			 {
				 found_c = true;
				 break;
			 }
		 }
		 if (found_c == true)
		 {
			 subs[subscription_count].setCustId(s.getCustId());
		 }
		 else
		 {
			 cout << endl << "Subscription can't be made since customer you are trying to enter does'nt belomng to Gym" << endl;
			 return;
		 }

		 bool found_p = false;
		 for (int i = 0; i < exerciseplan_count; i++)
		 {
			 if (eplan[i].getPlainId() == s.getPlainId())
			 {
				 found_p = true;
				 break;
			 }
		 }
		 if (found_p == true)
		 {
			 subs[subscription_count].setPlainId(s.getPlainId());
		 }
		 else
		 {
			 cout << endl << "Subscription can't be made since Exercise Plan you are trying to associate does'nt exists " << endl;
			 return;
		 }

		 for (int i = 0; i < subscription_count; i++)
		 {
			 if (subs[i].getSubsId() == s.getSubsId())
			 {
				 cout << "Subscription with Id " << s.getSubsId() << " already exists" << endl;
				 return;
			 }
		 }
		 subs[subscription_count].setSubId(s.getSubsId());

		 subs[subscription_count].date.setDay(s.date.getDay());
		 subs[subscription_count].date.setMonth(s.date.getMonth());
		 subs[subscription_count].date.setYear(s.date.getYear());

		 subscription_count++;
		 cout << endl << "Subscription Plan added  " << endl;
		 return;
	 }
     }
	void updateSubscriptionPlanInfo(int id)
	{
		for (int i = 0; i < subscription_count; i++)
		{
			if (id == subs[i].getSubsId())
			{
				int op;
				cout << endl << "Subscription Plan found." << endl;
				cout << " What do you want to update? " << endl;
				cout << " -> For Subscription ID updae Press '1' " << endl;
				cout << " -> For Customer Id update Press '2'" << endl;
				cout << " -> For Plan ID update Press '3'" << endl;
				cout << " -> For date update Press '4'" << endl;
				cout << " -> For updating whole customer info Pres'5' " << endl;


				cin >> op;
				if (op == 1)
				{
					int nid;
					bool found = true;
					cout << "enter new id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < subscription_count; i++)
						{
							if (subs[i].getSubsId() == nid)
							{
								cout << endl << " Subscription with id " << subs[i].getSubsId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new subscription id again as it already exists : ";
							cin >> nid;
						}

					}

					if (found == false)
					{
						subs[i].setSubId(nid);
						cout << "Subscription id updated successfully :)" << endl;
						return;
					}
				}

				else if (op == 2)
				{

					int n;
					cout << "enter new customer id : ";
					cin >> n;
					bool found_c = false;
					for (int i = 0; i < customer_count; i++)
					{
						if (custom[i].getCustomerId() == n)
						{
							found_c = true;
							break;
						}
					}
					if (found_c == true)
					{
						subs[i].setCustId(n);
						cout << " Customer ID updated Successfully :)" << endl;
						return;
					}
					else
					{
						cout << endl << "Subscription can't be update since customer you are trying to enter does'nt belomng to Gym" << endl;
						return;
					}
	
				}

				else if (op == 3)
				{
					int n;
					cout << "Enter Subscription's new Exercie Plan id : ";
					cin >> n;
					bool found_p = false;
					for (int i = 0; i < exerciseplan_count; i++)
					{
						if (eplan[i].getPlainId() == n)
						{
							found_p = true;
							break;
						}
					}
					if (found_p == true)
					{
						subs[i].setPlainId(n);
						cout << "Subscription's Exercise Plan Id updated successfully :)" << endl;
						return;
					}
					else
					{
						cout << endl << "Subscription can't be update since Exercise Plan you are trying to associate does'nt exists " << endl;
						return;
					}

				}

				else if (op == 4)
				{
					int d=0, m=0, y=0;  
					cout << "Enter new date in format DD/MM/YYYY " << endl;
					cin >> d>>m>> y;
					subs[i].date.setDate(d,m,y);
					cout << "Subscription's Exercise Plan date updated successfully :)" << endl;
					return;
				}

				else if (op == 5)
				{
					int nid;
					bool found = true;
					cout << "enter new id : ";
					cin >> nid;
					while (found != false)
					{

						for (int i = 0; i < subscription_count; i++)
						{
							if (subs[i].getSubsId() == nid)
							{
								cout << endl << " Subscription with id " << subs[i].getSubsId() << " already exists" << endl;
								found = true;
								break;
							}
							else found = false;

						}
						if (found == true)
						{
							cout << "please enter new subscription id again as it already exists : ";
							cin >> nid;
						}

					}

					/// 
					int n;
					cout << "enter new customer id : ";
					cin >> n;
					bool found_c = false;
					for (int i = 0; i < customer_count; i++)
					{
						if (custom[i].getCustomerId() == n)
						{
							found_c = true;
							break;
						}
					}
					if (found_c == true)
					{
						subs[i].setCustId(n);
					}
					else
					{
						cout << endl << "Subscription can't be update since customer you are trying to enter does'nt belomng to Gym" << endl;
						return;
					}
					//cout << " Customer ID updated Successfully :)" << endl;
				

					///
					int n1;
					cout << "Enter Subscription's new Exercie Plan id : ";
					cin >> n1;
					bool found_p = false;
					for (int i = 0; i < exerciseplan_count; i++)
					{
						if (eplan[i].getPlainId() == n1)
						{
							found_p = true;
							break;
						}
					}
					if (found_p == true)
					{
						subs[i].setPlainId(n1);
					}
					else
					{
						cout << endl << "Subscription can't be update since Exercise Plan you are trying to associate does'nt exists " << endl;
						return;
					}


					//
					int d = 0, m = 0, y = 0;
					cout << "Enter new date in format DD/MM/YYYY " << endl;
					cin >> d >> m >> y;
					subs[i].date.setDate(d, m, y);
					

					if (found == false)
					{
						subs[i].setSubId(nid);
						//	cout << "Subscription id updated successfully :)" << endl;
					}

					cout << "Subscription updated successfully :)" << endl;
					return;
				}

			}
		}
		cout << endl << "Subscription with given id not found :(" << endl;
	}
    void removeSubscription()
{
	//trainers.Print();
	cout << endl << "Which Subscription you want to remove? Please enter its Id " << endl;
	int id;
	cin >> id;

	int i = 0;
	for (i = 0; i < subscription_count; i++)
	{
		if (id == subs[i].getSubsId())
		{

			for (int j = i; j < subscription_count - 1; j++)
			{
				subs[j] = subs[j + 1];
				if (id == subs[j + 1].getSubsId())
				{
					i--;
				}
			}

			subscription_count--;
			cout << endl << "Subscriptionn with id " << "'" << id << "' removed" << endl;
			return;
		}

	}
	cout <<endl<< "Invalid entry" << endl;


}

    void PrintTrainer()
{
	cout << endl << endl << "          Current Trainers" << endl;
	for (int i = 0; i < trainer_count; i++)
	{
		train[i].printTrainer();
	}
}
    void PrintEquip()
{
	cout << endl << endl << "           Current Equipments" << endl;
	for (int i = 0; i < equip_count; i++)
	{
		equip[i].PrintEquipment();
	}

}
    void PrintExPlans()
{
	cout << endl << endl << "             Current Exercise Plans " << endl;
	for (int i = 0; i < exerciseplan_count; i++)
	{
		eplan[i].PrintExercisePlan();
	}
}
    void PrintCostumer()
{
	cout << endl << endl << "           Current Customers" << endl;
	for (int i = 0; i < customer_count; i++)
	{
		custom[i].PrintCustomer();
	}
}
    void printSubscription()
    {
	  cout << endl << endl << "           Current Subsciption" << endl;
	  for (int i = 0; i < subscription_count; i++)
	  {
		subs[i].printSubscription();
	  }
    }

   void PrintGymDetails()
{
	   cout << endl << "///////////////////////////////////////////////////////////////(" << getGymName() << ")/////////////////////////////////////////////////////////////////////////////" << endl << endl;

	cout << endl << endl << "                                                            Current Trainers" << endl;
	for (int i = 0; i < trainer_count; i++)
	{
		train[i].printTrainer();
	}

	cout << endl << endl << "                                                            Current Equipments" << endl;
	for (int i = 0; i < equip_count; i++)
	{
		equip[i].PrintEquipment();
	}

	cout << endl << endl << "                                                            Current Exercise Plans " << endl;
	for (int i = 0; i < exerciseplan_count; i++)
	{
		eplan[i].PrintExercisePlan();
	}
	 
	cout << endl << endl<<endl << "                                                            Current Subsciption" << endl;
	for (int i = 0; i < subscription_count; i++)
	{
		subs[i].printSubscription();
	}

	cout  << endl<<endl << endl << "                                                            Current Customers" << endl;
	for (int i = 0; i < customer_count; i++)
	{
		custom[i].PrintCustomer();
	}

}
   void UpdateFiles()
   {
	   ofstream fout_t;
	   fout_t.open("trainers.txt", ofstream::out | ofstream::trunc);
	   if (fout_t.is_open())
	   {
		   for (int i = 0; i < trainer_count; i++)
		   {
			   fout_t << train[i].getTrainerId();
			   fout_t << " ";
			   fout_t << train[i].getTrainerName();
			   fout_t << endl;
		   }

		   fout_t.close();
	   }
	   else
		   cout << endl<<"File not open"<<endl;

	   ofstream fout_e;
	   fout_e.open("equipment.txt", ofstream::out | ofstream::trunc);
	   if (fout_e.is_open())
	   {
		   for (int i = 0; i < equip_count; i++)
		   {
			   fout_e << equip[i].getEquipId();
			   fout_e << " ";
			   fout_e << equip[i].getEquipName();
			   fout_e << endl;
		   }

		   fout_e.close();
	   }
	   else
		   cout << endl << "File not open" << endl;

	   ofstream fout_ep;
	   fout_ep.open("exercisePlans.txt", ofstream::out | ofstream::trunc);
	   if (fout_ep.is_open())
	   {
		   for (int i = 0; i < exerciseplan_count; i++)
		   {
			   fout_ep << eplan[i].getPlainId();
			   fout_ep << " ";
			   fout_ep << eplan[i].getTrainId();
			   fout_ep << " ";
			   fout_ep << eplan[i].getEqipId();
			   fout_ep << " ";
			   fout_ep << eplan[i].getDuration();
			   fout_ep << endl;
		   }

		   fout_ep.close();
	   }
	   else
		   cout << endl << "File not open" << endl;

	   ofstream fout_s;
	   fout_s.open("subsription.txt", ofstream::out | ofstream::trunc);
	   if (fout_s.is_open())
	   {
		   for (int i = 0; i < subscription_count; i++)
		   {
			   fout_s << subs[i].getSubsId();
			   fout_s << " ";
			   fout_s << subs[i].date.getDay();
			   fout_s << " ";
			   fout_s << subs[i].date.getMonth();
			   fout_s << " ";
			   fout_s << subs[i].date.getYear();
			   fout_s << " ";
			   fout_s << subs[i].getCustId();
			   fout_s << " ";
			   fout_s << subs[i].getPlainId();
			   fout_s << endl;
		   }

		   fout_s.close();
	   }
	   else
		   cout << endl << "File not open" << endl;

	   ofstream fout_c;
	   fout_c.open("customers.txt", ofstream::out | ofstream::trunc);
	   if (fout_c.is_open())
	   {
		   for (int i = 0; i < customer_count; i++)
		   {

			   fout_c << custom[i].getCustomerId();
			   fout_c << " ";
			   fout_c << custom[i].getCustomerName();
			   fout_c << " ";
			   fout_c << custom[i].getCustomerAdress();
			   fout_c << " ";
			   fout_c << custom[i].getCustomerNumber();
			   fout_c << " ";
			   fout_c << custom[i].getCustomerEmail();
			   fout_c << endl;
		   }

		   fout_c.close();
	   }
	   else cout << endl<<"File Customer.txt not opened "<<endl;
    }
  ~Gym()
   {
	delete[] equip;
	delete[] train;
	delete[] custom;
	delete[] eplan;
	delete[] subs;

   }

};


int main()
{

	int L;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl
	<< "                                                      -> To Load Gym Press '1' " << endl;
	cout << endl << "                                                      -> To Create A New GYM Press '2'                                                           ";
	cin >> L;
	if (L == 1)
	{
		Gym A;
		int option;
		A.addTrainers();
		A.addEquipments();

        A.addSubscriptions();
		A.addExercisePlans();
		A.addEquipments();
		A.addcustomers();
		cout << endl << "///////////////////////////////////////////////////////////////("<<A.getGymName()<<")/////////////////////////////////////////////////////////////////////////////" << endl << endl;

		cout << "                                                       (Enter Any One of The Following)   " << endl
			<< "       0 For Exit    " << endl
			<< "       1 For Printing Current TrainerS Record              6 For Hiring A Trainer                     11 For Terminating a Trainer" << endl
			<< "       2 For Printing Current CustomerS Record             7 For Adding A Customer                    12 For Removing a Costumer" << endl
			<< "       3 For Printing Current EquipmentS Record            8 For Adding An Equipment                  13 For Removing an Equipment " << endl
			<< "       4 For Printing Current Exercise PlanS Record        9 For Creating An Execise Plan             14 For Removing an Exercise Plan" << endl
			<< "       5 For Printing Current SubscriptionS Record        10 For Creating A Subscription              15 For Removing a Subscription" << endl
			<< "         	                                                                                                            " << endl
			<< "      16 For Updating Trainer Info                        17  For Updating Customer info              18 For Updating an Equipment Info   " << endl
			<< "      19 For Updating an Exercise Plan                    20  For Updating Subscription Plan          21 For Print Full Gym Record " << endl;

			cout << "                                                                                                                                                           ";
		cin >> option;
		while (option != 0)
		{
			if (option == 1)
			{
				A.PrintTrainer();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 2)
			{
				A.PrintCostumer();
				cout << "                                                                                                                                                           ";
				cin >> option;
				
			}
			if (option == 3)
			{
				A.PrintEquip();
				cout << "                                                                                                                                                           ";
				cin >> option;

			}
			if (option == 4)
			{
				A.PrintExPlans();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 5)
			{
				A.printSubscription();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 6)
			{
				cout << endl << " -> Adding a Trainer" << endl;
				int id;
				string name;
				cout << endl << "Enter Id of Trainer:  ";
				cin >> id;
				cout << "Enter name of the Trainer : ";
				cin.ignore();
				getline(cin,name);
				trainer* b = new trainer(id, name);
				A.AddaTrainer(*b);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 7)
			{
				cout << endl << " -> Adding a Customer" << endl;
				int id_no;
				string name;
				string phone;
				string address;
				string email;
				cout << endl << "Enter Id of Customer : ";
				cin >> id_no;
				cout << "Enter name of the Customer with : ";
				cin.ignore();
				getline(cin ,name);
				cout << "Enter phone No : ";
				getline(cin,phone);
				cout << "Enter Address of Customer : ";
				getline(cin,address);
				cout << "Enter Email of Customer : ";
				getline(cin,email);

				customer* c = new customer(id_no, name, email, phone, address);
				A.addaCustomer(*c);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 8)
			{
				cout << endl << " -> Adding an Equipment" << endl;
				int id;
				string name;
				cout << endl << "Enter Id of Equipment : ";
				cin >> id;
				cout << "Enter name of the Equipment : ";
				cin.ignore();
				getline(cin,name);
				equipment* b = new equipment(id, name);
				A.addanEquipment(*b);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 9)
			{
				cout << endl << " -> Adding Exercise Plan" << endl;
				int plainid;
				int trainerid;
				int duration;
				int equipid;
				cout << "Enter Id of plan  : ";
				cin >> plainid;
				cout << "Enter Id of Trainer : ";
				cin >> trainerid;
				cout << "Enter Id of Equipment  : ";
				cin >> equipid;
				cout << "Duration : ";
				cin >> duration;
				exerciseplan e(plainid, trainerid, equipid, duration);
				A.addanExercisePlan(e);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 10)
			{
				cout << endl << " -> Adding A Subscription" << endl;

				int subs_id;
				int cust_id;
				int plain_id;

				int d, m, y;
				cout << "Enter subscription id : ";
				cin >> subs_id;
				cout << " Enter date in format DD/MM/YYYY : ";
				cin >> d >> m >> y;
				Date* dat = new Date(d, m, y);
				cout << " enter customer id : ";
				cin >> cust_id;
				cout << "Enter plan id : ";
				cin >> plain_id;

				subscription* sub = new subscription(subs_id, *dat, cust_id, plain_id);
				A.addaSubscription(*sub);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 11)
			{
				cout << endl << " -> Removing a trainer  " << endl;
				A.removeaTrainer();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 12)
			{
				cout << endl << " -> Removing a Custumer : ";
				A.removeaCustomer();
				cout << "                                                                                                                                                           ";
				cin >> option;


			}
			if (option == 13)
			{
				cout << endl << " -> Removing an Equipment  : " << endl;
				A.removeanEquipment();
				cout << "                                                                                                                                                           ";
              	cin >> option;

			}
			if (option == 14)
			{
				cout << endl << " -> Removing an Exercise Plan " << endl;
				A.removeExercisePlan();
				cout << "                                                                                                                                                           ";
				cin >> option;
				

			}
			if (option == 15)
			{
				cout << endl << " -> Removing a Subscription " << endl;
				A.removeSubscription();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 16)
			{
				cout << endl << " -> Updating trainer info " << endl;
				int id;
				cout << "Enter trainer ID whoes info you want to update :";
				cin >> id;
				A.updateTrainerInfo(id);
				cout << "                                                                                                                                                           ";

				cin >> option;

			}
			if (option == 17)
			{
				cout << endl << " -> Updating Customer info " << endl;
				int id;
				cout << "Enter Customer ID whoes info you want to update :";
				cin >> id;
				A.updateCustomerInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 18)
			{
				cout << endl << " -> Updating Equipment info " << endl;
				int id;
				cout << "Enter Equipment ID whoes info you want to update :";
				cin >> id;
				A.updateEquipmentInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option ==19)
			{
				cout << endl << " -> Updating An Exercise Plan" << endl;
				int id;
				cout << "Enter Plan ID whoes info you want to update :";
				cin >> id;
				A.updateExercisePlanInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 20)
			{
				cout << endl << " -> Updating A Subscription " << endl;
				int id;
				cout << "Enter Subscription ID whoes info you want to update :";
				cin >> id;
				A.updateSubscriptionPlanInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 21)
			{
				A.PrintGymDetails();
				cout << "                                                                                                                                                           ";
				cin >> option;
				
			}

		}

	 	A.UpdateFiles();
		cout << "Program Exit!!!!!";
	}
	else if (L == 2)
	{
		Gym A;
		string name;
		cout << "Enter Gym Name : ";
		cin.ignore();
		getline(cin, name);
		cout <<endl<< "Gym created successfully :)" << endl;
		A.setGymName(name);
		int option;
		
		cout << endl << "///////////////////////////////////////////////////////////////(" << A.getGymName() << ")/////////////////////////////////////////////////////////////////////////////" << endl << endl;

		cout << "                                                       (Enter Any One of The Following)   " << endl
			<< "       0 For Exit    " << endl
			<< "       1 For Printing Current TrainerS Record              6 For Hiring A Trainer                     11 For Terminating a Trainer" << endl
			<< "       2 For Printing Current CustomerS Record             7 For Adding A Customer                    12 For Removing a Costumer" << endl
			<< "       3 For Printing Current EquipmentS Record            8 For Adding An Equipment                  13 For Removing an Equipment " << endl
			<< "       4 For Printing Current Exercise PlanS Record        9 For Creating An Execise Plan             14 For Removing an Exercise Plan" << endl
			<< "       5 For Printing Current SubscriptionS Record        10 For Creating A Subscription              15 For Removing a Subscription" << endl
			<< "         	                                                                                                            " << endl
			<< "      16 For Updating Trainer Info                        17  For Updating Customer info              18 For Updating an Equipment Info   " << endl
			<< "      19 For Updating an Exercise Plan                    20  For Updating Subscription Plan          21 For Print Full Gym Record " << endl;

		cout << "                                                                                                                                                           ";
		cin >> option;
		while (option != 0)
		{
			if (option == 1)
			{
				A.PrintTrainer();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 2)
			{
				A.PrintCostumer();
				cout << "                                                                                                                                                           ";
				cin >> option;

			}
			if (option == 3)
			{
				A.PrintEquip();
				cout << "                                                                                                                                                           ";
				cin >> option;

			}
			if (option == 4)
			{
				A.PrintExPlans();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 5)
			{
				A.printSubscription();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 6)
			{
				cout << endl << " -> Adding a Trainer" << endl;
				int id;
				string name;
				cout << endl << "Enter Id of Trainer:  ";
				cin >> id;
				cout << "Enter name of the Trainer : ";
				cin.ignore();
				getline(cin, name);
				trainer* b = new trainer(id, name);
				A.AddaTrainer(*b);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 7)
			{
				cout << endl << " -> Adding a Customer" << endl;
				int id_no;
				string name;
				string phone;
				string address;
				string email;
				cout << endl << "Enter Id of Customer : ";
				cin >> id_no;
				cout << "Enter name of the Customer with : ";
				cin.ignore();
				getline(cin,name);
				cout << "Enter phone No : ";
				getline(cin, phone);
				cout << "Enter Address of Customer : ";
				getline(cin,address);
				cout << "Enter Email of Customer : ";
				getline(cin,email);

				customer* c = new customer(id_no, name, email, phone, address);
				A.addaCustomer(*c);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 8)
			{
				cout << endl << " -> Adding an Equipment" << endl;
				int id;
				string name;
				cout << endl << "Enter Id of Equipment : ";
				cin >> id;
				cout << "Enter name of the Equipment : ";
				getline(cin,name);
				equipment* b = new equipment(id, name);
				A.addanEquipment(*b);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}
			if (option == 9)
			{
				cout << endl << " -> Adding Exercise Plan" << endl;
				int plainid;
				int trainerid;
				int duration;
				int equipid;
				cout << "Enter Id of plain  : ";
				cin >> plainid;
				cout << "Enter Id of Trainer : ";
				cin >> trainerid;
				cout << "Enter Id of Equipment  : ";
				cin >> equipid;
				cout << "Duration : ";
				cin >> duration;
				exerciseplan e(plainid, trainerid, equipid, duration);
				A.addanExercisePlan(e);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 10)
			{
				cout << endl << " -> Adding A Subscription" << endl;

				int subs_id;
				int cust_id;
				int plain_id;

				int d, m, y;
				cout << "Enter subscription id : ";
				cin >> subs_id;
				cout << " Enter date in format DD/MM/YYYY : ";
				cin >> d >> m >> y;
				Date* dat = new Date(d, m, y);
				cout << " enter customer id : ";
				cin >> cust_id;
				cout << "Enter plan id : ";
				cin >> plain_id;

				subscription* sub = new subscription(subs_id, *dat, cust_id, plain_id);
				A.addaSubscription(*sub);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 11)
			{
				cout << endl << " -> Removing a trainer  " << endl;
				A.removeaTrainer();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 12)
			{
				cout << endl << " -> Removing a Custumer : ";
				A.removeaCustomer();
				cout << "                                                                                                                                                           ";
				cin >> option;


			}
			if (option == 13)
			{
				cout << endl << " -> Removing an Equipment  : " << endl;
				A.removeanEquipment();
				cout << "                                                                                                                                                           ";
				cin >> option;

			}
			if (option == 14)
			{
				cout << endl << " -> Removing an Exercise Plan " << endl;
				A.removeExercisePlan();
				cout << "                                                                                                                                                           ";
				cin >> option;


			}
			if (option == 15)
			{
				cout << endl << " -> Removing a Subscription " << endl;
				A.removeSubscription();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 16)
			{
				cout << endl << " -> Updating trainer info " << endl;
				int id;
				cout << "Enter trainer ID whoes info you want to update :";
				cin >> id;
				A.updateTrainerInfo(id);
				cout << "                                                                                                                                                           ";

				cin >> option;

			}
			if (option == 17)
			{
				cout << endl << " -> Updating Customer info " << endl;
				int id;
				cout << "Enter trainer ID whoes info you want to update :";
				cin >> id;
				A.updateCustomerInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 18)
			{
				cout << endl << " -> Updating Equipment info " << endl;
				int id;
				cout << "Enter Equipment ID whoes info you want to update :";
				cin >> id;
				A.updateEquipmentInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 19)
			{
				cout << endl << " -> Updating An Exercise Plan" << endl;
				int id;
				cout << "Enter Plan ID whoes info you want to update :";
				cin >> id;
				A.updateExercisePlanInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 20)
			{
				cout << endl << " -> Updating A Subscription " << endl;
				int id;
				cout << "Enter Subscription ID whoes info you want to update :";
				cin >> id;
				A.updateSubscriptionPlanInfo(id);
				cout << "                                                                                                                                                           ";
				cin >> option;
			}

			if (option == 21)
			{
				A.PrintGymDetails();
				cout << "                                                                                                                                                           ";
				cin >> option;
			}



		}

		A.UpdateFiles();

		cout << "Program Exit!!!!!";
	}

}
