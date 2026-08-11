#pragma once

struct PulseSelectorOutflowList_t  // sizeof 0x18, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
    CUtlVector< OutflowWithRequirements_t > m_Outflows; // offset 0x0, size 0x18, align 8
};
