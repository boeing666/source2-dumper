#pragma once

class CPulseCell_IntervalTimer : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_ResumePoint m_Completed; // offset 0xD8, size 0x48, align 255 | MPropertyDescription
    SignatureOutflow_Continue m_OnInterval; // offset 0x120, size 0x48, align 255 | MPropertyDescription
};
