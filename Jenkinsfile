pipeline {
    agent {
        docker { image 'mitrjain1996/calculator-env:latest' }
    }
    stages {
        stage('build') {
            steps{
                dir('cross-compile') {
                    sh 'ls -al'
                    sh 'chmod 777 build.sh'
                    sh './build.sh'
                }
            }
        }

        stage('test') {
            steps{
                sh 'pwd'
                dir('cross-compile/build/tests/') {
                    sh 'ls -al'
                    sh './test_Calculator'
                }
                
            }
        }

        stage('publish') {
            steps{
                sh 'echo "Publish artificats."'
            }
        }
    }
}
