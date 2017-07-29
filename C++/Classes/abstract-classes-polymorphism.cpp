class LRUCache : Cache {
private:
	int cap;
	int size = 0;
public:
	LRUCache(int capacity) {
		cap = capacity;
	}
	void set(int key, int val) {
		if (size == 0)
		{
			Node* n = new Node(key, val); // use new and pointer to allocate on heap
			head = n;
			tail = n;
			mp.insert(pair<int, Node*>(key, n));
			size++;
		}
		else
		{
			Node* np = head;
			while ((*np).key != key && (*np).next != NULL)
			{
				np = (*np).next;
			}
			if ((*np).key == key)
			{
				// Found the key in cache

				// case 1: first node (update value)
				if ((*head).key == key) {
					(*head).value = val;
				}
				// case 2: middle node
				else if ((*np).next != NULL) {
					// remove old node
					(*np).prev->next = (*np).next;
					(*np).next->prev = (*np).prev;
					// replace it at head
					(*np).next = head;
					(*np).prev = NULL;
					(*np).next->prev = np;
					head = np;
					// update value
					(*head).value = val;
				}
				else {
					// case 3: end node
					tail = (*np).prev;
					(*np).prev->next = NULL;
					(*np).next = head;
					(*np).prev = NULL;
					(*np).value = val;
					(*head).prev = np;
					head = np;
				}
			}
			else {
				// key not found, insert at head
				if (size < cap) {
					if (size > 0) {
						// nonempty list which can grow
						size++;
						Node* newNode = new Node(NULL, head, key, val);
						(*head).prev = newNode;
						head = newNode;
					}
					else
					{
						// empty list which can grow
						size++;
						Node* newNode = new Node(NULL, NULL, key, val);
						head = newNode;
						tail = newNode;
					}
				}
				else {
					if (size == 1) {
						mp.erase(tail->key);

						// full list with 1 item
						(*head).value = val;
						(*head).key = key;
					}
					else {
						mp.erase(tail->key);

						// full list with more than 1 item
						Node* newNode = new Node(NULL, head, key, val);
						(*tail).prev->next = NULL;
						tail = (*tail).prev;
						(*head).prev = newNode;
						head = newNode;
					}
				}
				Node* newptr = head;
				mp.insert(pair<int, Node*>(key, newptr));
			}
		}
	}
	int get(int a) {
		map<int, Node*>::const_iterator it = mp.find(a);
		if (it != mp.end()) {
			Node* temp = mp.at(a);
			return temp->value;
		}
		else {
			return -1;
		}
	}
};