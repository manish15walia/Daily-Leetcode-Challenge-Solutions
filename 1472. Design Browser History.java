/* https://leetcode.com/problems/design-browser-history/description/ */

class BrowserHistory {
    List<String> l;
    int pos;
    public BrowserHistory(String homepage) {
        l = new ArrayList<>();
        l.add(homepage);
        pos = 0;
    }
    public void visit(String url) {
        l = l.subList(0, pos + 1); 
        l.add(url);
        pos++;
    }
    public String back(int steps) {
        int i = (pos - steps) >= 0 ? (pos - steps) : 0;
        pos = i;
        return l.get(i);
    }
    public String forward(int steps) {
        int i = (pos + steps) >= l.size() ? (l.size() - 1) : (pos + steps);
        pos = i;
        return l.get(i);
    }
}
