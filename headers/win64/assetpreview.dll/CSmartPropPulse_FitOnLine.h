#pragma once

class CSmartPropPulse_FitOnLine : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseSelectorOutflowList_t m_OutflowList; // offset 0x48, size 0x18, align 8
};
