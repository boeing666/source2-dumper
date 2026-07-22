#pragma once

class CAudioMorphData  // sizeof 0x68, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< float32 > m_times; // offset 0x0, size 0x18, align 8
    CUtlVector< uint32 > m_nameHashCodes; // offset 0x18, size 0x18, align 8
    CUtlVector< CUtlString > m_nameStrings; // offset 0x30, size 0x18, align 8
    CUtlVector< CUtlVector< float32 > > m_samples; // offset 0x48, size 0x18, align 8
    float32 m_flEaseIn; // offset 0x60, size 0x4, align 4
    float32 m_flEaseOut; // offset 0x64, size 0x4, align 4
};
