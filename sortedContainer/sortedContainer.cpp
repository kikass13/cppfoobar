    // struct testStruct
    // {
    //     testStruct() {sort = std::rand();}
    //     bool operator()(testStruct const & result1, testStruct const & result2)
    //     {
    //         // return "true" if "p1" is ordered before "p2", for example:
    //         return result1.sort < result2.sort;
    //     }
    //    char buff[1000];
    //    int sort;
    // };

    // // Test space container runtime
    // int k = 100000;
    // int runs = 100;
    // int maxSize = 20;

    // //vector
    // this->debugTimer_.startTimer("sortVectorTimer");
    // for (int g = 0; g < runs; g++)
    // {
    //     std::vector<testStruct> testvector;
    //     testvector.reserve(k);
    //     //generate testStructs
    //     for (int f = 0; f < k; f++)
    //     {
    //         testvector.push_back(testStruct());
    //     }

    //     //std::generate(testvector.begin(), testvector.end(), std::rand);

    //     std::sort(testvector.begin(), testvector.end(), testStruct()); //using default < operator

    //     //for (int u = 0; u < testvector.size(); u++)
    //     //    std::cout << testvector[u].sort << std::endl;
    // }
    // this->debugTimer_.endTimer("sortVectorTimer");

    // //Prio q
    // for (int h = 0; h < runs; h++)
    // {
    //     this->debugTimer_.startTimer("sortMaxSizePrioTimer");
    //     std::priority_queue<testStruct, std::vector<testStruct>, testStruct> q;
    //     for (int v = 0; v < k; v++)
    //     {
    //         if (q.size() < maxSize)
    //             q.push(testStruct());
    //         else
    //         {
    //             testStruct nextStruct = testStruct();
    //             if (nextStruct.sort < q.top().sort)
    //             {
    //                 q.pop();
    //                 q.push(nextStruct);
    //             }
    //         }
    //     }

    //     std::vector<testStruct> testvector;
    //     testvector.reserve(maxSize);
    //     for (int i = 0; i < maxSize; i++)
    //     {
    //         testvector.push_back(q.top());
    //         q.pop();
    //     }
    //     std::sort(testvector.begin(), testvector.end(), testStruct()); //using default < operator
    //     this->debugTimer_.endTimer("sortMaxSizePrioTimer");

    //     for (int u = 0; u < testvector.size(); u++)
    //         std::cout << testvector[u].sort << std::endl;

    //     //int dummyValue = q.size();
    //     //for (int u = 0; u < dummyValue; u++)
    //     //{
    //     //    std::cout << q.top().sort << std::endl;
    //     //    q.pop();
    //     //}
    // }

    // for (int h = 0; h < runs; h++)
    // {
    //     this->debugTimer_.startTimer("sortOpenPrioTimer");
    //     std::priority_queue<testStruct, std::vector<testStruct>, testStruct> q1;
    //     for (int v = 0; v < k; v++)
    //     {
    //         q1.push(testStruct());
    //     }
    //     this->debugTimer_.endTimer("sortOpenPrioTimer");

    //     //int dummyValue = q1.size();
    //     //for (int u = 0; u < dummyValue; u++)
    //     //{
    //     //    std::cout << q1.top().sort << std::endl;
    //     //    q1.pop();
    //     //}
    // }



    // std::cout << "elements: " << k << " \nsortVectorTimer / run: " << this->debugTimer_.getCumulative("sortVectorTimer") / runs
    //           << " \nsortMaxSizePrioTimer / run: " << this->debugTimer_.getCumulative("sortMaxSizePrioTimer") / runs
    //           << " \nsortOpenPrioTimer / run: " << this->debugTimer_.getCumulative("sortOpenPrioTimer") / runs << std::endl;

    // //for (int z = 0; z < testvector.size(); z++)
    // //    std::cout << testvector[z] << std::endl;