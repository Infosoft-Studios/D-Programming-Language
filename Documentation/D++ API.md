D++ API (for C++ Code)
=================================

8.1 Overview
------------
The D++ API (for C++ Code) defines how native C++ programs can interact with the D++ Runtime,
Kernel, and Boot subsystems while retaining the **same privilege model** as D++ itself.
This allows C++ developers to write tools, services, and system components that behave like
first‑class D++ clients, without giving up the power and familiarity of C++.

With this API, you are free to create your own C++/D++ hybrid scripts, modules, and system
layers that call into D++ as a privileged backend.

8.2 Privilege Levels
--------------------
The D++ API for C++ exposes three explicit privilege levels:

- **User**  
  Standard application mode. Limited access to kernel‑style services. Safe for general apps.

- **Kernel**  
  Elevated mode. Full access to D++ kernel subsystems (scheduler, memory, I/O, object manager).
  Intended for system tools, drivers, and core services.

- **Boot**  
  Highest privilege. Access to boot manager, early hardware initialization, and system startup
  logic. Intended for boot loaders, recovery tools, and system bring‑up logic.

When initializing the D++ runtime from C++, you must choose the appropriate privilege level.
This choice determines which subsystems and operations are available.

8.3 Runtime Context
-------------------
Every C++ client of D++ operates within a **runtime context**. A context typically includes:

- A selected privilege level (User, Kernel, Boot)
- A target subsystem name (e.g. `"winkrnl"` for kernel, `"bootmgr"` for boot manager)
- Optional configuration parameters (profiles, modes, flags)

The context is passed to the D++ runtime initialization function. Once initialized, the C++
process is treated as a D++ client with the declared privileges and subsystem routing.

8.4 Kernel‑Style Request Model
------------------------------
To interact with D++ kernel‑style services from C++, the API uses a **request object** pattern
similar to IRPs:

- A request contains:
  - An operation type (Read, Write, Ioctl, etc.)
  - A buffer pointer and length
  - A command or IOCTL code
- The request is dispatched to the D++ kernel subsystem.
- The D++ runtime validates the request against the current privilege level and subsystem.
- The result is returned as a status code and optional data in the buffer.

This model lets C++ code behave like a privileged client of the D++ kernel without embedding
D++ language syntax directly.

8.5 Boot Manager Integration
----------------------------
For Boot‑level privilege, the D++ API allows C++ programs to:

- Load a D++ boot configuration (profile, kernel enable, hardware init flags)
- Start the D++ boot sequence
- Halt or stop the D++ system in a controlled way

This makes it possible to write boot loaders, recovery tools, and startup orchestrators in C++
that delegate core logic to D++ while retaining full control over flow and environment.

8.6 Creating Your Own C++/D++ Scripts
-------------------------------------
The D++ API is intentionally designed so that you can:

- Write pure C++ programs that call into D++ subsystems.
- Embed D++ concepts (kernel, boot, hardware, objects) into your own C++ tooling.
- Build hybrid C++/D++ scripts where:
  - C++ handles orchestration, UI, integration with existing ecosystems.
  - D++ handles kernel‑style logic, structured subsystems, and low‑level abstractions.

You are not restricted to predefined operations; you can define your own command codes,
request types, and subsystem contracts, as long as they follow the D++ API conventions.

8.7 Intended Audience
---------------------
This section is aimed at developers who:

- Want to use C++ as a host language while leveraging D++ as a privileged system layer.
- Need to build tools, kernels, or boot logic that integrate tightly with D++.
- Prefer explicit control over privilege levels and subsystem routing.

With the D++ API (for C++ Code), you can treat D++ as a **system core** and C++ as your
**integration and orchestration layer**, creating powerful hybrid solutions with full access
to D++ capabilities.

8.8 Sample codes
---------------------

Bootloader
```cpp
#include <dppwin.h> // for windows
// #include <dppmac.h> for mac
#include <iostream>

void bootload()
{
    fn::load()-> prv
    {
        kernel::loadinit: -> public(end*line)
    }
}
```
