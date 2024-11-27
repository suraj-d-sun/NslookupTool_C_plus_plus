#include "./include/DNSResolver.h"
#include "./include/ConfigManager.h"
#include <iostream>

using namespace std;

//@brief Main function that runs the DNS lookup tool.
int main(int argc, char* argv[]) 
{
    ConfigManager config(argc, argv);

    // Retrieve the domain name from the configuration
    string domain = config.getConfig("domain");
    if (domain.empty()) 
    {
        cerr << "Usage: main domain=<domain_name>" << endl;
        return 1;
    }

    DNSResolver dnsResolver;
    auto results = dnsResolver.resolveDomain(domain);  // Perform the domain resolution and store the results
    dnsResolver.logResults(domain, results);   // Log the IP's for the resolved domain

    return 0;  
}
