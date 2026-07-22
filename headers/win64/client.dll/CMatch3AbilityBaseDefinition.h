#pragma once

class CMatch3AbilityBaseDefinition  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sLocName; // offset 0x0, size 0x8, align 8
    CUtlString m_sLocDescription; // offset 0x8, size 0x8, align 8
    CPanoramaImageName m_sImage; // offset 0x10, size 0x10, align 8
    CUtlVector< CMatch3AbilityParamDefinition > m_vecParams; // offset 0x20, size 0x18, align 8
};
