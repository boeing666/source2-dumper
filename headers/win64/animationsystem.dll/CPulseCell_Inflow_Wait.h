#pragma once

class CPulseCell_Inflow_Wait : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPulse_ResumePoint m_WakeResume; // offset 0x48, size 0x48, align 255
};
