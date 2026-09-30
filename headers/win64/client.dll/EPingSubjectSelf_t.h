#pragma once

enum EPingSubjectSelf_t : uint32_t  // sizeof 0x4
{
    k_ePingSubjectSelf_Any = 0,
    k_ePingSubjectSelf_Self = 1,
    k_ePingSubjectSelf_NotSelf = 2,
};
