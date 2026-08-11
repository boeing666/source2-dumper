#pragma once

class CSmartPropPulse_PlaceOnPath : public CSmartPropPulse_BaseQueryableFlow /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseSelectorOutflowList_t m_OutflowList; // offset 0x48, size 0x18, align 8
    CUtlString m_PathName; // offset 0x60, size 0x8, align 8 | MPropertyDescription
};
