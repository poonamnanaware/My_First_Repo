/*#include<iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int Data;
	node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Singly_linkedList
{
	private:
		PNODE Head;
	public:
		Singly_linkedList();
		~Singly_linkedList();
		BOOL InsertFirst ( int );
		BOOL InsertLast ( int );
		BOOL InsertAtPosition ( int, int );
		inline void Display( );
		inline int Count( );
		BOOL DeleteFirst( );
		BOOL DeleteAtPosition(int);
		BOOL DeleteLast( );
};

Singly_linkedList ::Singly_linkedList ( )
{
	Head = NULL;
}

Singly_linkedList ::~Singly_linkedList ( )
{
	PNODE Temp,Navigate;

	if ( Head != NULL)
	{
		Navigate = Head;
		while (Navigate != NULL)
		{
			Temp = Navigate->Next;
			delete Navigate;			
			Navigate = Temp;
		}
	}
}

BOOL Singly_linkedList::InsertFirst( int no )
{
	PNODE newn = NULL;

	newn = new NODE;
	if (newn == NULL)
	{
		return FALSE;
	}

	newn->Next = NULL;
	newn->Data = no;

	if (Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> Next = Head;
		Head = newn;
	}
	return TRUE;
}

BOOL Singly_linkedList::InsertLast ( int no)
{
	PNODE newn = NULL, temp = Head;
	newn = new NODE;

	if (newn == NULL)
	{
		return FALSE;
	}

	newn->Next = NULL;
	newn->Data = no;
	
	if (Head == NULL)
	{
		Head = newn;
	}
	else
	{
		while(temp->Next != NULL)
		{
			temp = temp->Next;
		}
		temp->Next = newn;
	}

	return TRUE;
}

BOOL Singly_linkedList::InsertAtPosition( int pos, int no)
{
	if((Head == NULL) || (pos > Count()+1) || (pos <= 0))
	{
		return FALSE;
	}

	if( pos == 1 )
	{
		return(InsertFirst(no));
	}
	else if(pos == (Count( )) + 1)
	{
		return(InsertLast(no));
	}
	else
	{
		PNODE newn = NULL, temp = Head;

		newn = new NODE;
		if (newn == NULL)
		{
			return FALSE;	
		}

137. newn -> Next = NULL;
138. newn -> Data = no;
139.
140. for(int i = 1; i <= (pos-2); i++)
141. {
142. temp = temp -> Next;
143. }
144.
145. newn -> Next = temp -> Next;
146. temp -> Next = newn;
147. }
148.
149. return TRUE;
150.}
151.
152.BOOL Singly_linkedList::DeleteFirst()
153.{
Piyush Khairnar - 7588945488 आमी Technical संसार करतो !!! ©Marvellous Infosystems Page 2

Marvellous Infosystems : Pre-Placement Activity
154. PNODE temp = Head;
155.
156. if(Head == NULL)
157. {
158. return FALSE;
159. }
160. else
161. {
162. Head = Head -> Next;
163. free(temp);
164. }
165. return TRUE;
166.}
167.
168.BOOL Singly_linkedList::DeleteLast()
169.{
170. if(Head == NULL)
171. {
172. return FALSE;
173. }
174. else if(Head->Next == NULL)
175. {
176. delete Head;
177. Head = NULL;
178. }
179. else
180. {
181. PNODE temp1 = Head, temp2 = NULL;
182.
183. while(temp1 -> Next -> Next != NULL)
184. {
185. temp1 = temp1 -> Next;
186. }
187.
188. temp2 = temp1 -> Next;
189. temp1->Next = NULL;
190. free(temp2);
191. }
192.
193. return TRUE;
194.}
195.
196.BOOL Singly_linkedList::DeleteAtPosition( int pos )
197.{
198. if((Head == NULL) || (pos > Count()) || (pos <= 0))
199. {
200. return FALSE;
201. }
202. else if( pos == 1 )
203. {
204. DeleteFirst();
205. }
206. else if(pos == (Count( )))
207. {
208. DeleteLast();
209. }
210. else
211. {
212. PNODE temp1 = Head, temp2 = NULL;
213.
214. for(int i = 1; i<= (pos-2); i++)
215. {
216. temp1 = temp1 -> Next;
217. ++i;
218. }
219.
220. temp2 = temp1 -> Next;
221. temp1->Next = temp2->Next;
222.
223. delete temp2;
224. }
225. return TRUE;
226.}
227.
228.void Singly_linkedList::Display()
229.{
230. PNODE Temp = Head;
231.
Piyush Khairnar - 7588945488 आमी Technical संसार करतो !!! ©Marvellous Infosystems Page 3

Marvellous Infosystems : Pre-Placement Activity
232. while(Temp != NULL)
233. {
234. cout<<Temp -> Data<<" -> ";
235. Temp = Temp -> Next;
236. }
237. cout<<"NULL\n";
238.}
239.
240.int Singly_linkedList::Count()
241.{
242. PNODE Temp = Head;
243. int iCnt = 0;
244.
245. while(Temp != NULL)
246. {
247. iCnt++;
248. Temp = Temp -> Next;
249. }
250. return iCnt;
251.}
252.
253.int main()
254.{
255. Singly_linkedList obj1;
256. Singly_linkedList *obj2 = new Singly_linkedList();
257.
258. obj1.InsertFirst(51);
259. obj1.InsertFirst(21);
260. obj1.InsertFirst(11);
261.
262. obj1.Display();
263.
264. cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";
265.
266. obj1.InsertFirst(101);
267. obj1.InsertFirst(111);
268.
269. obj1.Display();
270.
271. cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";
272.
273. obj1.InsertAtPosition(75,4);
274. obj1.Display();
275.
276. cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";
277.
278. obj1.DeleteFirst();
279. obj1.Display();
280.
281. obj1.DeleteLast();
282. obj1.Display();
283. 284. obj2->InsertFirst(501);
285. obj2->InsertFirst(511);
286. obj2->InsertFirst(521);
287.
288. obj2->Display();
289.
290. obj2->InsertLast(551);
291. obj2->InsertAtPosition(601,3);
292.
293. obj2->Display();
294.
295. cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";
296.
297. delete obj2;
298.
299. return 0;
300.}*/