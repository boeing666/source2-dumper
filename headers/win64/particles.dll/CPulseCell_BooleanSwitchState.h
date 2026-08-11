#pragma once

class CPulseCell_BooleanSwitchState : public CPulseCell_BaseState /*0x0*/  // sizeof 0x198, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseObservableBoolExpression_t m_Condition; // offset 0x48, size 0x78, align 8 | MPropertyDescription
    CPulse_OutflowConnection m_SubGraph; // offset 0xC0, size 0x48, align 255
    CPulse_OutflowConnection m_WhenTrue; // offset 0x108, size 0x48, align 255
    CPulse_OutflowConnection m_WhenFalse; // offset 0x150, size 0x48, align 255
};
