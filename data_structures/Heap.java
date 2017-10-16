public class Heap {
    private int size = 0;
    private int initialSize = 10;
    private int[] items;
    
    public Heap() {
        items = new int[initialSize];
    }

    private void ensureCapacity() {
        if(size == initialSize) {
            int[] temp = new int[initialSize * 2];
            for(int i = 0; i < initialSize; i++)
                temp[i] = items[i];
            items = temp;
        }
    }

    public int getMini() {
        return items[0];
    }

    public void insert(int item) {
        ensureCapacity();
        items[size] = item;
        size++;
        heapifyUp();
    }

    public void extractMin() {
        if(size == 0) return;

        items[0] = items[size - 1];
        size--;
        heapifyDown();
    }

    private void swap(int p, int c) {
        int temp = items[p];
        items[p] = items[c];
        items[c] = temp;
    }

    public boolean hasParent(int i) {
        return (i - 1)/2 >= 0;
    }
    
    public void heapifyUp() {
        int i = size - 1;
        int p;
        while(hasParent(i)) {
            p = (i - 1)/2;
            if(items[i] < items[p]) {
                swap(p, i);
                i = p;
            }
            else break;
        }
    }

    public void heapifyDown() {

    }    

    public static void main(String[] args) {
        Heap heap = new Heap();
        heap.insert(3);
        heap.insert(1);
        System.out.print(heap.getMini());
    }
}