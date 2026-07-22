#pragma once

class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon}
{
public:
    char _pad_0000[0x98]; // offset 0x0
    int32 m_nCursorsAllowedToRunParallel; // offset 0x98, size 0x4, align 4 | MPropertyDescription
    char _pad_009C[0x4]; // offset 0x9C
};
