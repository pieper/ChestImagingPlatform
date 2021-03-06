// generated by Fast Light User Interface Designer (fluid) version 1.0300

#include "QueryOverlayGUI.h"
#include "cipChestConventions.h"

QueryOverlayGUI::QueryOverlayGUI() {
  { queryOverlayWindow = new Fl_Double_Window(384, 76, "Query Overlay");
    queryOverlayWindow->box(FL_UP_BOX);
    queryOverlayWindow->user_data((void*)(this));
    { chestRegionOutput = new Fl_Output(100, 10, 270, 25, "Chest Region");
    } // Fl_Output* chestRegionOutput
    { chestTypeOutput = new Fl_Output(100, 40, 270, 25, "Chest Type");
    } // Fl_Output* chestTypeOutput
    queryOverlayWindow->end();
  } // Fl_Double_Window* queryOverlayWindow
}

void QueryOverlayGUI::SetChestRegion(std::string cipRegionName) {
  this->chestRegionOutput->value(cipRegionName.c_str());
}

void QueryOverlayGUI::SetChestType(std::string cipTypeName) {
  this->chestTypeOutput->value(cipTypeName.c_str());
}
