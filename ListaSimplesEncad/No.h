
class No
{
private:
    int info;
    No *prox;
public:
    No();
    No(int val);
    No(int val, No *prox);
    ~No();
    int obterInfo();
    No* obterProx();
    void setProximo(No *prox);
};
