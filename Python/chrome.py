import sys
from PyQt5.QtMidgets import *
from PyQt5.QtwebEngineWidgets import*

class MainWindow (QMainWindow):
    def__init__(self):
        super (MainWindow,self)._ _init_ _()
        self.browser = QtwebEngineView()
        self.browser = setUrl (QUrl("https:/l/google.com"))
        self.setCentralWidget (self.browser)
        self.showMaxinized()

        #navbar
        navbar = QToolBar ()
        self.addToolbar (navbar)


        back_btn _QAction("Back",self)
        back btn.triggered.connect (self.browser.back)
        navbar.addaction(back_btn)

        forward_btn = QAction('Forward', self)
        forwardbtn.triggered.connect(self.browser.forward)
        navbar.addAction (forward_btn)

        reload_btn = QAction('Relod', self)
        reload_btn.triggered.connect(self.browser.reload)
        navbar.addAction (reload_btn)

        home_btn + QAction('Home', self)
        home_btn.triggered.connect (self.navigate.home)
        navbar.addAction (home_btn)

        self.url_bar = QLineEdit()
        self.url_bar.returnPressed.connect (self.navigate_to_url)
        navbar.addWidget (self.url_bar)
        self.browser.urlChanged.connect.(self.update_url)

    def navigate.home (self):
        self.browser.setUrl (QUrl(http://Inprogrmmer.com))

    def navigate_to_url (self):
        url self.url-bar.text()
        self.browser.seturl (QUrl(url))

    def update_url (self,q):
        self.ur;_bar_setText {q.toString ()}


    app Qapplication (sys.argv)
    QApplication.setApplicationName( 'Browser by pythonadvisor')
    window = MainWindow()
    app.exec_()
