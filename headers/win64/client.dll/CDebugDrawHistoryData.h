#pragma once

class CDebugDrawHistoryData  // sizeof 0x78, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CHandle< C_BaseEntity > m_hEntity; // offset 0x0, size 0x4, align 4
    ESceneViewDebugOverlaysListenerDataType_t m_etype; // offset 0x4, size 0x4, align 4
    CUtlLeanVector< Vector4D > m_vectors; // offset 0x8, size 0x10, align 8
    CUtlLeanVector< Color > m_colors; // offset 0x18, size 0x10, align 8
    CUtlLeanVector< float32 > m_dimensions; // offset 0x28, size 0x10, align 8
    CUtlLeanVector< float64 > m_times; // offset 0x38, size 0x10, align 8
    CUtlLeanVector< uint64 > m_uint64s; // offset 0x48, size 0x10, align 8
    CUtlLeanVector< bool > m_bools; // offset 0x58, size 0x10, align 8
    CUtlLeanVector< CUtlString > m_strings; // offset 0x68, size 0x10, align 8
};
