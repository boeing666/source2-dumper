#pragma once

class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    int32 m_nCursorsAllowedToWait; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
    CPulse_ResumePoint m_WaitComplete; // offset 0x50, size 0x48, align 255
};
