#include "Test.h"
#include "Pattern.h"
class MISCQ31:public Client::Suite
    {
        public:
            MISCQ31(Testing::testID_t id);
            void setUp(Testing::testID_t,std::vector<Testing::param_t>& params,Client::PatternMgr *mgr);
            void tearDown(Testing::testID_t,Client::PatternMgr *mgr);
        private:
            #include "MISCQ31_decl.h"
            Client::Pattern<q31_t> input1;
            Client::Pattern<q31_t> input2;
            Client::LocalPattern<q31_t> output;

            int nba;
            int nbb;
            
    };