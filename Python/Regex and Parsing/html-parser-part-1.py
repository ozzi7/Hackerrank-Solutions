from html.parser import HTMLParser

class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print('Start : '+tag)
        for attr in attrs:
            if attr[1]:
                print('-> ' + attr[0] + ' > ' + attr[1])
            else:
                print('-> ' + attr[0] + ' > ' + 'None')

    def handle_endtag(self, tag):
        print('End   : ' + tag)

    def handle_startendtag(self, tag, attrs):
        print('Empty : ' + tag)
        for attr in attrs:
            if attr[1]:
                print('-> ' + attr[0] + ' > ' + attr[1])
            else:
                print('-> ' + attr[0] + ' > ' + 'None')


parser = MyHTMLParser()
for i in range(int(input())):
    parser.feed(input())