#pragma once

class CHintMessage  // sizeof 0x28, align 0xFF (server)
{
public:
    char* m_hintString; // offset 0x0, size 0x8, align 8
    CUtlVector< char* > m_args; // offset 0x8, size 0x18, align 8
    float32 m_duration; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
