# table data to data file
data = \
[[ 0.75,        0.29619813, -0.29619813, -0.75      ],
 [ 0.29619813,  0.11697778, -0.11697778, -0.29619813],
 [-0.29619813, -0.11697778,  0.11697778,  0.29619813],
 [-0.75,       -0.29619813,  0.29619813,  0.75      ]]

outfile = open('temp_table.dat','w')
for row in data:
    for column in row:
        outfile.write('%14.8f' %(column))
    outfile.write('/n')
outfile.close()
