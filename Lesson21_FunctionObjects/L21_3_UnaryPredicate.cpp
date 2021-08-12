// A structure as a unary predicate
template <typename numberType>
struct IsMultiple {
    numberType Divisor;

    IsMultiple(const numberType &divisor){
        Divisor = divisor;
    }

    bool operator() (const numberType &element){
        return ((element % Divisor) == 0);
    }
};

int main(void){

    // use the unary predicate here

    return 0;
}
