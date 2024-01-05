//mereko leftview print krna hai give Tree ka
//iske loye level or leftsize ka 1 vectore banainge usme value tore krenge 
void printLeftView(Tree* Node, int level, vector<int> &leftview) { //idhar hum leftview ka address lenge kyuki baar update hoga
    //base case
    if(root == NULL) {
        return;
    }

    //1 case mai solve krunga, abki recursion dekhlega;
    if(level == leftview.size()) { //pehle check kiya ki jo level hai vog humare vector ke size ke equal hai kya, if yes then push
        leftview.push_back(root->data); //then root ke data ko push krdo uss vector mai 
    }

    //ab recursion solve krega
    printLeftView(root->left, level++, leftview);
    printLeftView(root->right, level++, leftview);
}

//ab mereko right side view chaiye tree ka 
//iske liye mereko level chaiye & right size ka 1 vector baunga or usme value store krunga or size check krta rhunga
void printRightView(Tree* Node, int level, vector<int> &rightview) {
    //base case
    if(root==NULL) {
        return;
    }

    //1 case solve krunga
    if(level==rightview.size()) {
        rightsize.push_back(root->data);
    }

    //ab recursion dekhlega
    printRightView(root->right, level++, rightview);
    printRightView(root->left, level++, rightview);
}

//ab mereko TOP view chaiye tree ka 
lafda hai top view ke liye
mapping krni pdegi or queue bhi banana pdega
map -> level, data 
Queue-> root, level=0 se initialize krdenge

void printTopView(Node* root) {
    map<int, int> hdToNodeMap;
    queue<pair<Node*, int>> q;

    q.push(make_pair(root,0));
    while(!q.empty()) {
        pair<Node*, int> front = q.front();
        q.pop();

        Node* frontNode = front.first;
        int level = front.second;

        if(hdToNodeMap.find(level)==hdToNodeMap.end()) {
            hdToNodeMap[level] = frontNode->data;
        }

        if(frontNode->left!=NULL) {
            q.push(make_pair(frontNode->left, level-1));
        }

        if(frontNode->right!=NULL) {
            q.push(make_pair(frontNode->right, level+1));
        }
    }

    cout<<"Printing top view: "<< endl;
    for(auto data: hdToNodeMap) {
        cout << data.second << " ";
    }
}