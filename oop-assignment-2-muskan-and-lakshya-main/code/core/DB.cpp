#include "DB.h"

DB::DB() {
    // init data here if needed
}

DB& DB::getInstance() {
    static DB instance;
    return instance;
}

// keep your existing method implementations (addProduct, etc.)

