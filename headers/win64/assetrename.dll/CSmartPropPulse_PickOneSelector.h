#pragma once

class CSmartPropPulse_PickOneSelector : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    ConfigurationHandleShape_t m_HandleShape; // offset 0x48, size 0x4, align 4 | MPropertyGroupName MPropertyReadonlyExpr MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    PulseSelectorOutflowList_t m_OutflowList; // offset 0x50, size 0x18, align 8
};
