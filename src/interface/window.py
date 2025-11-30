from PySide6.QtWidgets import QMainWindow, QApplication

class Window(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Novation-Automap-Legacy-Bridge")
        self.setGeometry(100,100,500,500)

app = QApplication([])

window = Window()
window.show()

app.exec()

