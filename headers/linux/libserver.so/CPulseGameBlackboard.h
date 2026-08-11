#pragma once

class CPulseGameBlackboard : public CBaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_strGraphName; // offset 0x790, size 0x8, align 8
    CUtlString m_strStateBlob; // offset 0x798, size 0x8, align 8
};
