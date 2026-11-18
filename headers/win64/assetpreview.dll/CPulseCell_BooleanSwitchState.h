#pragma once

class CPulseCell_BooleanSwitchState : public CPulseCell_BaseState /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_OutflowConnection m_WhenTrue; // offset 0xD8, size 0x48, align 255 | MPropertyDescription MPropertyFriendlyName
    CPulse_OutflowConnection m_WhenFalse; // offset 0x120, size 0x48, align 255 | MPropertyDescription MPropertyFriendlyName
};
