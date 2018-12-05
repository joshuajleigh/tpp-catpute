
--author Josh Leigh
--title Containers, what came before, and some visuals
--header Moar catpute less space
--newpage

--huge OR
--newpage
--title It used to be terrible, and blurry cats
--newpage

Like in the real world, computers use containers
to hold things. In this case containers hold software

---

       + - - - - - - - - - +
===>   |  place software   |  <===
===>   |   in here plz     |  <===
       + - - - - - - - - - +

--newpage
Containers use kernel tools such as

            * namespaces
            * cnames
            * seccomp-bpf

to run a process isolated from the host operating system,
without having to talk through a hypervisor to the kernel.
--newpage



--right In terms of cats it looks like this:
--newpage
--exec timeout 3 feh -Z -B black catpute-pics/cats-containers.jpg
In terms of compute it looks like this:
--newpage
--exec timeout 10 feh -Z -B black catpute-pics/container.png



--center Wait, why use containers?

---
---
--center to can safetly fit more software in a smaller
--center space than we could before with virtual machines
---

--center see confusing diagram
--newpage
--exec timeout 10 feh -Z -B black catpute-pics/cont-vs-vm.jpg
--newpage


--center So what is a virtual machine?


--center What is a hypervisor?
--newpage



Virtual Machines emulate hardware for an operating system;
The operating system is mostly unaware it is running in
software and not on a physical machine

---

The Hypervisor translates requests from the guest OS to
systemcalls to real hardware

--newpage

--right In cats this is like...
---

--exec timeout 3 feh -Z -B black catpute-pics/cat-vm.jpg
--newpage

In compute this is like...

--newpage
--exec timeout 6 feh -Z -B black catpute-pics/vm.png


--center Wait... why did we use VMs?


---
--center To safely fit more software in a smaller space than
--center we could before with just a single operating system

--newpage
--exec timeout 10 feh -Z -B black catpute-pics/catpute-pics/vm-vs-os.png


--center I guess you're going to bore me with operating systems now?

---

--center yes

--newpage

Operating systems manage access to resources, this
includes some handy notions we take for granted today
such as
  - users
  - file permissions
  - managed access to
    - CPU
    - Memory
    - HDD
    - many, many other peripherals
  - managed processes / queues

--newpage


--center Why are OSes a big whoop?
---

--center They manage who has access to what files
--center (users and permissions)
---

--center and manage what hardware an app can access
--center (processes, systemcalls)
---

--newpage
--right cat level efficiency
--newpage
--exec timeout 3 feh -Z -B black catpute-pics/cat-os.jpg

another picture about OSes
--newpage
--exec timeout 6 feh -Z -B black catpute-pics/os.jpg

--newpage
--center continueing historcally backwards
--center and stylistcally downhill
--center we will next discuss...
--newpage


--huge The   dark   days
--huge before   the   OS

--newpage


--center computer operations meant human operators
--newpage
--exec timeout 3 feh -Z -B black catpute-pics/operators.jpg

humans were needed to monitor tape drives
and replace them manually as needed
as well as start and stop applications

--newpage


--center this used to be application management
--newpage
--exec timeout 6 feh -Z -B black catpute-pics/punch-cards.jpg


--right in terms of cats something like
--newpage
--exec timeout 3 feh -Z -B black catpute-pics/cat-herd.png

--newpage
--center That looks like the worst


---
It used to be worse.
--newpage

--center It was really bad

---

the Z1: 1936

--newpage

30,000 moving parts
---
64 word memory
---
1 Hz speed
---
punch tape input and output
---
--exec timeout 6 feh -Z -B black catpute-pics/z1.jpg
---


--center No thank you

--newpage

The Difference engine: 1876


---
This calculated values of polynomial functions.
---
--exec timeout 6 feh -Z -B black catpute-pics/babbage-difference.png

---
Included was error checking.
---

When the device jammed, there was an error.
Feature, not a bug predates electricity.

--newpage

The Pascaline: 1642
---

Beautiful hardwood case
---
8 polished metal dials
---
It could add and subtract.
---
--exec timeout 3 feh -Z -B black catpute-pics/pascaline.jpg
---
I'll rate it 'better than the plague.'

--newpage

--right As cats I would place these machines as...
---
--exec timeout 3 feh -Z -B black catpute-pics/tiger.jpg

Very pretty,
---
---
Wouldn't want to touch it.

--newpage

--center Attempting to summarize


computing has gone from:
---
  adding machines to
---
  -> general purpose computing machines to
---
     -> operating systems to
---
        -> virtual machines to
---
           -> containters
---

--newpage

Compute has changed a great deal,
but both humans and computers remain
---
--exec timeout 3 feh -Z -B black catpute-pics/prey.jpg


--huge     prey

--newpage

--center thank you



This amalgamation of text and pictures
is available at github:


https://github.com/joshuajleigh/tpp-catpute
