#pragma once

class CPulseCell_PickBestOutflowSelector : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseBestOutflowRules_t m_nCheckType; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
    PulseSelectorOutflowList_t m_OutflowList; // offset 0x50, size 0x18, align 8
};
