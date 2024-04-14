#include <iostream>
using namespace std;

class XMLData {
    string xmlData;
public:
    XMLData(string pXmlData){
        xmlData = pXmlData;
    }
    string getXMLData(){
        return xmlData;
    }
};

class DataAnalyticsTool{
    string jsonData;
public:
    DataAnalyticsTool(){}
    DataAnalyticsTool(string pJsonData){
        jsonData = pJsonData;        
    }
    virtual void analyseData(){
        cout << "Analyzing data  " << jsonData << endl;
    }
};

class Adapter : public DataAnalyticsTool{
    XMLData* xmlData;
public:
    Adapter(XMLData* pXmlData){
        xmlData = pXmlData;
    }
    void analyseData() override {
        cout << "Converting XML Data " << xmlData->getXMLData() << " to JSON Data " << endl;
        cout << "Analysing the converted JSON Data " << endl;
    }
};
class Client {
public:
    void ProcessData(DataAnalyticsTool* tool){
        tool->analyseData();
    }
};

int main(){
    XMLData* xmlData = new XMLData("Sample Data") ;
    DataAnalyticsTool* tool = new Adapter(xmlData);
    Client* client = new Client ;
    client->ProcessData(tool);
    return 0; 
}


