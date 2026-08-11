#pragma once

class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPulseEditorCanvasItemSpecKV3}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    int32 m_nCursorsAllowedToWait; // offset 0xD8, size 0x4, align 4 | MPropertyDescription
    char _pad_00DC[0x4]; // offset 0xDC
    CPulse_ResumePoint m_WaitComplete; // offset 0xE0, size 0x48, align 255
};
